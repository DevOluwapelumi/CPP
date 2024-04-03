// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int score = 0; // Variable to store the score
//     char grade;    // Variable to store the grade

//     // Prompt the user to enter their score
//     cout << "Enter your score: ";
//     cin >> score;

//     // Determine the grade based on the score
//     if(score >= 70){
//         grade = 'A';
//     }
//     else if(score >= 60 && score <= 69){
//         grade = 'B';
//     }
//     else if(score >= 50 && score <= 59){
//         grade = 'C';
//     }
//     else if(score >= 45 && score <= 49){
//         grade = 'D';
//     }
//     else if(score >= 40 && score <= 44){
//         grade = 'E';
//     }
//     else{
//         grade = 'F';
//     }

//     // Display the grade to the user
//     cout << "Your grade is " << grade << endl;

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string state;
    cout << "What is the state of the bulb?";
    cin >> state;

    if (state == "ON")
    {
        cout << "Bulb is ON";
    }
    else
    {
        cout << "Bulb is OFF";
    }
}






