#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int subtract(){
    int val1 =12, val2 = 5;
    int result = val1 - val2;
    return result;
}

string myName(string firstname){
    string lastname;
    cout<< "Enter your last name";
    cin >> lastname;
    string name = firstname + " " + lastname;
    return name;
}

void addition(){
    cout<<"Your total score is "<< 56 + 34;
}

double addition(int a, double b){
    int sub = subtract();
    float res = a + b * sub;
    cout<<myName("Victor")<<" your score is "<< res;
}

int main(){
    addition(4.56, 7.09);
}