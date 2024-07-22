#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Student {
public:
    Student(int id, std::string name, int age, std::string major)
        : id(id), name(name), age(age), major(major) {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getMajor() const { return major; }

private:
    int id;
    std::string name;
    int age;
    std::string major;
};

class StudentDatabase {
public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void viewAllStudents() const {
        if (students.empty()) {
            std::cout << "No students in the database.\n";
            return;
        }

        for (const auto& student : students) {
            printStudentInfo(student);
        }
    }

    void deleteStudent(int id) {
        auto it = std::find_if(students.begin(), students.end(),
            [id](const Student& s) { return s.getId() == id; });

        if (it != students.end()) {
            students.erase(it);
            std::cout << "Student with ID " << id << " deleted.\n";
        } else {
            std::cout << "Student with ID " << id << " not found.\n";
        }
    }

private:
    std::vector<Student> students;

    void printStudentInfo(const Student& student) const {
        std::cout << "ID: " << student.getId()
                  << ", Name: " << student.getName()
                  << ", Age: " << student.getAge()
                  << ", Major: " << student.getMajor() << "\n";
    }
};

void displayMenu() {
    std::cout << "\nStudent Database Management System\n";
    std::cout << "1. Add Student\n";
    std::cout << "2. View All Students\n";
    std::cout << "3. Delete Student\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    StudentDatabase db;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id, age;
                std::string name, major;

                std::cout << "Enter student ID: ";
                std::cin >> id;
                std::cin.ignore();  // Clear newline from buffer

                std::cout << "Enter student name: ";
                std::getline(std::cin, name);

                std::cout << "Enter student age: ";
                std::cin >> age;
                std::cin.ignore();  // Clear newline from buffer

                std::cout << "Enter student major: ";
                std::getline(std::cin, major);

                db.addStudent(Student(id, name, age, major));
                std::cout << "Student added successfully.\n";
                break;
            }
            case 2:
                db.viewAllStudents();
                break;
            case 3: {
                int id;
                std::cout << "Enter student ID to delete: ";
                std::cin >> id;
                db.deleteStudent(id);
                break;
            }
            case 4:
                std::cout << "Exiting program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}