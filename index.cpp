// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout<<"Please enter your name";
//     cin>>name;
//     cout<<"Welcome "<< name <<" to c++ class. This class promised to be exciting."<<endl;
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Please enter your first name: ";
    getline(cin, name);
    string lname;
    cout << "Please enter your Last name: ";
    getline(cin, lname);
    string fullName = name.append(" " + lname);
    cout << "Full Name: " << fullName << endl;
    string level;
    cout << "Please enter your Level: ";
    getline(cin, level);
    string school;
    cout << "Please enter your School: ";
    getline(cin, school);
    string course;
    cout << "Please enter your Course: ";
    getline(cin, course);
    cout << "Welcome " << name << " " << lname << " to " << level << " at " << school << " taking " << course << ". This class promises to be exciting." << endl;
    return 0;
}



//  std::cout << "Welcome to C++ class. This class promised to be exciting."<<std::endl;
//     std::cout << "This is the first class. It started late due to some technical issues \n";


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string fname="Oluwa", lname="Pelumi", location= "Ogbomoso", myclass="NID2";
//     int cplusplus, python, javascript, java;
//     const int age = 50;
//     char character = 'r';
//     float price = 45.7;
//     double score = 78.8;
//     bool status = true;
//     double answer = 34E2;
//     float result = 43e3;

//     python = 10;

//     cout << "Python value: " << python << endl;

//     string output = "Welcome " + fname + " " + lname + " from " + location + " " + " to the C++ class. This class promises to be exciting.";
//     cout << output << endl;

//     string fullName = fname.append(" " + lname);
//     cout << "Full Name: " << fullName << endl;

//     cout << "The length of the string is " << output.length() << endl;
//     cout << "The length of the string is " << output.size() << endl;

//     return 0;
// }
