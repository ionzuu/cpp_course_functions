#include<iostream>
using namespace std;

int globalVar = 5;

main(){

    int localVar = 7;

    cout << "Value of global variable: " << globalVar << endl;
    cout << "Value of local variable: " << localVar << endl;

}