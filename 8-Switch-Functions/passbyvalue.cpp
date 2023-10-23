#include <iostream>
using namespace std;

//Function Signature(int,void etc)
void dummy(int n){

    n++; //incrementing the value but it will be different as its a copy value
    cout << "n is: " << n << endl;

    // return; return is not needed since the function is void which means that it will not
    // return any int/char etc data type.
}

int main(){

    int n;

    cin>> n;

    dummy(n);

    cout << "This is a number " << n << endl;

    return 0;
}