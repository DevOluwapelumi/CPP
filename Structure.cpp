#include <iostream>
#include <string>
using namespace std;

int main(){
    
    struct{
    int age;
    string name;
    float score;
    string level;
}my_values;
    
     // Assign value a member of a structure
    my_values.age = 28;
    my_values.name = "Oluwapelumi";
    my_values.score = 69;
    my_values.level = 5;

    struct{
    int age2;
    string name2;
    float score2;
    string level2;
}my_value2;

    // Assign value a member of a structure
    my_value2.age2 = 28;
    my_value2.name2 = "Oluwapelumi";
    my_value2.score2 = 69;
    my_value2.level2= 5;
}