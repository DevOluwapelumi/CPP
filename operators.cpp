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


// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string state;
//     cout << "What is the state of the bulb?";
//     cin >> state;

//     if (state == "ON")
//     {
//         cout << "Bulb is ON";
//     }
//     else
//     {
//         cout << "Bulb is OFF";
//     }
// }






// Write a simple application that can be used to check the weather condition if rain is going to fall (humility, temperature, cloud)


#include <iostream>
#include <string>

using namespace std;

int getHumidity()
{
    int humidity;
    cout << "Enter humidity percentage: ";
    cin >> humidity;
    return humidity;
}

int getTemperature()
{
    int temperature;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    return temperature;
}

int getCloudCover()
{
    int cloudCover;
    cout << "Enter cloud cover percentage: ";
    cin >> cloudCover;
    return cloudCover;
}

int main()
{
    int humidity = getHumidity();
    int temperature = getTemperature();
    int cloudCover = getCloudCover();

    if (humidity > 70 && temperature < 35 && cloudCover < 50)
    {
        // cout << "Looks like it might rain soon!" << endl;
        cout << "Rain will fall soon!" << endl;
    }
    else
    {
        // cout << "No immediate rain expected." << endl;
        cout << "Rain is not falling." << endl;
    }

    return 0;
}