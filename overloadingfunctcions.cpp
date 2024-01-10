#include <iostream> 
using namespace std;

//overloading functions
int power(int, int);
main(){
    cout << power (2, 3) << endl;
}

int power(int b, int e){
    int tmp = b;
    while(e-- > 1 )
        b *= tmp;
    return b;
}