   #include <iostream>
    using namespace std;

    int main(){

        int i = 0;
        while(i < 10){
            cout<< "Testing loop"<< i+1 <<end1;
            i++;   //increment
        }

        int i = 10;
        while(i > 0){
            cout<< "Testing loop"<< i <<end1;
            i++;   //decrement
        }


        int i = 0;
        while(i < 10){
            if(i == 5){
                break;
            }
            cout<< "Testing loop"<<end1;
        }

        int i = 0;
        while(i < 10){
            if(i == 5){
                continue;
            }
            cout<< "Testing loop"<<end1;
        }

        while(true){
            string stop;
            cout<<"Press x to terminate..."<<end1;
            cin >> stop;
            if(stop == "x"){
                break;
            }
            cout<< "Testing loop"<<end1;
        }

        int i = 10;
        do{
            cout<<"Testing do while loop..."<<end1;
            i--;
        }
        while (i > 0);
    }