#include <iostream>
using namespace std;
int main() {
    int age_tunde = 20;
    int age_yemi = 27;
    int age_micheal = 30;
    age_tunde = 50;

    int age_of_student[10];

    age_of_student[0] = 10;
    age_of_student[1] = 23;
    age_of_student[2] = 12;
    age_of_student[3] = 45;
    age_of_student[4] = 34;
    age_of_student[5] = 32;
    age_of_student[6] = 52;
    age_of_student[7] = 15;
    age_of_student[8] = 56;
    age_of_student[9] = 24;

    cout<<age_of_student[5];
    age_of_student[8] = 25;
    cout<<age_of_student[8];

    string names[5] = {"Yemi", "Tope", "Kayode", "Ola", "Miracle"};
    cout<< names[4];

    for (int i=0; i<10; i++){
        cout<<age_of_student[i]<<endl;
    }

    for (int i=0; i<10; i++){
        cout<< names[i]<<endl;
    }

    for (int i : age_of_student){
        printf("%d", i);
        printf("\n");
    }

    for (string nam : names){
        printf("%s", nam.c_str());
        printf("\n");
    }

    string names2[] = {"Micheal", "John", "OAlu", "Sunday", "Ade", "Oluchukwu"};
    for (string nam : names2){
        cout<<nam<<endl;
    }

    cout<< sizeof(names2);

    int size = sizeof(names)/sizeof(string);
    cout<<size<<endl;

    int classNum[3][4] = {{1, 2, 3, 4}, {12, 13, 14, 15}, {20, 21, 22, 23}};
    string className[3][4] = {{"Ola", "Olu", "Oni", "Oti"}, {"Micheal", "Miche", "Man", "Mon"}, {"Tola", "Tolu", "Tosin", "Tos"}};
    string names3[3][4];
    names3[0][0] = "Micheal";
    names3[0][1] = "Tolu";

    //cout<< className[1][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<className[i][j]<<endl;
        }
    }
}
