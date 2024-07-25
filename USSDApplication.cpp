#include <iostream>
#include <string>
using namespace std;

class USSDApplication {
public:
    virtual void showMenu() = 0; 
    virtual void handleInput(int choice) = 0;
    virtual ~USSDApplication() {}
};

class BalanceInquiry : public USSDApplication {
public:
    void showMenu() override {
        cout << "Balance Inquiry Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Main Menu\n";
    }

    void handleInput(int choice) override {
        if (choice == 1) {
            cout << "Your balance is 100.\n";
        } else if (choice == 2) {
            cout << "Returning to main menu...\n";
        } else {
            cout << "Invalid choice.\n";
        }
    }
};

class DataBundlePurchase : public USSDApplication {
public:
    void showMenu() override {
        cout << "Data Bundle Purchase Menu:\n";
        cout << "1. Buy 1GB\n";
        cout << "2. Buy 5GB\n";
        cout << "3. Main Menu\n";
    }

    void handleInput(int choice) override {
        if (choice == 1) {
            cout << "You have purchased 1GB of data.\n";
        } else if (choice == 2) {
            cout << "You have purchased 5GB of data.\n";
        } else if (choice == 3) {
            cout << "Returning to main menu...\n";
        } else {
            cout << "Invalid choice.\n";
        }
    }
};

class CustomerSupport : public USSDApplication {
public:
    void showMenu() override {
        cout << "Customer Support Menu:\n";
        cout << "1. Talk to an agent\n";
        cout << "2. Main Menu\n";
    }

    void handleInput(int choice) override {
        if (choice == 1) {
            cout << "Connecting to an agent...\n";
        } else if (choice == 2) {
            cout << "Returning to main menu...\n";
        } else {
            cout << "Invalid choice.\n";
        }
    }
};

// Main USSD application class
class USSDMainApp {
private:
    USSDApplication* services[3];

    

public:
    USSDMainApp() {
        services[0] = new BalanceInquiry();
        services[1] = new DataBundlePurchase();
        services[2] = new CustomerSupport();
    }

    ~USSDMainApp() {
        for (auto service : services) {
            delete service;
        }
    }

    void showMainMenu() {
        cout << "Main Menu:\n";
        cout << "1. Balance Inquiry\n";
        cout << "2. Data Bundle Purchase\n";
        cout << "3. Customer Support\n";
        cout << "4. Exit\n";
    }

    void handleMainInput(int choice) {
        if (choice >= 1 && choice <= 3) {
            services[choice - 1]->showMenu();
            int subChoice;
            cin >> subChoice;
            services[choice - 1]->handleInput(subChoice);
        } else if (choice == 4) {
            cout << "Exiting...\n";
        } else {
            cout << "Invalid choice.\n";
        }
    }

    void run() {
        int choice;
        do {
            showMainMenu();
            cin >> choice;
            handleMainInput(choice);
        } while (choice != 4);
    }
};

int main() {
    USSDMainApp app;
    app.run();
    return 0;
}
