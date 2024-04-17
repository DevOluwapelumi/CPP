#include <iostream>
#include <string>
using namespace std;

int main() {

    for (int i = 0; i < 10; i++) {
        cout << "Testing for loop ..." << endl;
    } // increment

    for (int i = 10; i > 0; i--) {
        cout << "Testing for loop ..." << endl;
    } // decrement

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << "Testing for loop ..." << endl;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << "Testing for loop ..." << endl;
    }

    for (int i = 1; i < 10; i++) {
        cout << "Starting with value " << i << endl;
        for (int j = 1; j < 10; j++) {
            string result = to_string(i) + " * " + to_string(j) + " = " + to_string(i * j);
            cout << result << endl;
        }

        cout << "End of multiplication ..." << endl;
    }

    return 0;
}
