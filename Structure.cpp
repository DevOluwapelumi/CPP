#include <iostream>
#include <string>
using namespace std;

int main()

// {
//     struct{
//     int age;
//     string name;
//     float score;
//     string level;
// }my_values;
    
//      // Assign value a member of a structure
//     my_values.age = 28;
//     my_values.name = "Oluwapelumi";
//     my_values.score = 69;
//     my_values.level = 5;

//     struct{
//     int age2;
//     string name2;
//     float score2;
//     string level2;
// }my_value2;

//     // Assign value a member of a structure
//     my_value2.age2 = 28;
//     my_value2.name2 = "Oluwapelumi";
//     my_value2.score2 = 69;
//     my_value2.level2= 5;
// }


{
    struct my_Values
    {
        int age;
        string name;
        float score;
        string level;
    } my_Values, my_Values2, my_Values3;

    my_Values.age = 28;
    my_Values.name = "Segun";
    my_Values.score = 98.5;
    my_Values.level = 5;

    my_Values2.age = 18;
    my_Values2.name = "Daniel";
    my_Values2.score = 28.5;
    my_Values2.level = 2;

    my_Values3.age = 12;
    my_Values3.name = "Love";
    my_Values3.score = 18.5;
    my_Values3.level = 3;

    cout << my_Values.age << endl;

return 0;
}
