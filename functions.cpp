#include<iostream>
using namespace std;

int a, b;

int menu(){
    int option;
    cout << "M e n u" << endl << "1-. Sum" << endl << "2-. Substract" << endl << "3-. Multiply" << endl << "4-. Divisions" << endl;
    cout << "What option do you like to do:";
    cin >> option;
    cout << "Insert first number:";
    cin >> a;
    cout << endl << "Insert second number:";
    cin >> b;
    cout << endl;
    return option;
}
int sum(int a, int b){
    return a+b;
}
int substract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}

main(){
    switch(menu()){
        case 1:
        cout << sum(a ,b);
        break;
        case 2:
        cout << substract(a ,b);
        break;
        case 3:
        cout << multiply(a ,b);
        break;
        case 4:
        cout << divide(a, b);
        break;
        default:
        cout << "You selected an incorrect option" << endl;
    }
}