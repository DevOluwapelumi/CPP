#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

class BankAccount {
public:
    BankAccount(int accountNumber, std::string name, double balance)
        : accountNumber(accountNumber), name(name), balance(balance) {}

    int getAccountNumber() const { return accountNumber; }
    std::string getName() const { return name; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

private:
    int accountNumber;
    std::string name;
    double balance;
};

class Bank {
public:
    void createAccount(int accountNumber, const std::string& name, double initialDeposit) {
        auto it = std::find_if(accounts.begin(), accounts.end(),
            [accountNumber](const BankAccount& acc) { return acc.getAccountNumber() == accountNumber; });

        if (it == accounts.end()) {
            accounts.emplace_back(accountNumber, name, initialDeposit);
            std::cout << "Account created successfully." << std::endl;
        } else {
            std::cout << "Account number already exists." << std::endl;
        }
    }

    void deposit(int accountNumber, double amount) {
        BankAccount* account = findAccount(accountNumber);
        if (account) {
            account->deposit(amount);
        } else {
            std::cout << "Account not found." << std::endl;
        }
    }

    void withdraw(int accountNumber, double amount) {
        BankAccount* account = findAccount(accountNumber);
        if (account) {
            account->withdraw(amount);
        } else {
            std::cout << "Account not found." << std::endl;
        }
    }

    void displayAllAccounts() const {
        if (accounts.empty()) {
            std::cout << "No accounts in the bank." << std::endl;
            return;
        }

        std::cout << std::setw(15) << "Account Number" << std::setw(20) << "Name" << std::setw(15) << "Balance" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

        for (const auto& account : accounts) {
            std::cout << std::setw(15) << account.getAccountNumber()
                      << std::setw(20) << account.getName()
                      << std::setw(15) << std::fixed << std::setprecision(2) << account.getBalance() << std::endl;
        }
    }

private:
    std::vector<BankAccount> accounts;

    BankAccount* findAccount(int accountNumber) {
        auto it = std::find_if(accounts.begin(), accounts.end(),
            [accountNumber](const BankAccount& acc) { return acc.getAccountNumber() == accountNumber; });

        return (it != accounts.end()) ? &(*it) : nullptr;
    }
};

void displayMenu() {
    std::cout << "\nBank Management System" << std::endl;
    std::cout << "1. Create Account" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Display All Accounts" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    Bank bank;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int accountNumber;
                std::string name;
                double initialDeposit;

                std::cout << "Enter account number: ";
                std::cin >> accountNumber;
                std::cin.ignore();

                std::cout << "Enter name: ";
                std::getline(std::cin, name);

                std::cout << "Enter initial deposit: $";
                std::cin >> initialDeposit;

                bank.createAccount(accountNumber, name, initialDeposit);
                break;
            }
            case 2: {
                int accountNumber;
                double amount;

                std::cout << "Enter account number: ";
                std::cin >> accountNumber;

                std::cout << "Enter deposit amount: $";
                std::cin >> amount;

                bank.deposit(accountNumber, amount);
                break;
            }
            case 3: {
                int accountNumber;
                double amount;

                std::cout << "Enter account number: ";
                std::cin >> accountNumber;

                std::cout << "Enter withdrawal amount: $";
                std::cin >> amount;

                bank.withdraw(accountNumber, amount);
                break;
            }
            case 4:
                bank.displayAllAccounts();
                break;
            case 5:
                std::cout << "Exiting program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}