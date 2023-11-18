#include<iostream>
using namespace std;


int main(){

    // &---> (Address of) Operator
    int a = 3;
    int*b = &a;

    // int a;
    // int *b;

    // a=3; 
    
    // b=&a;

    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;

    // *--->   (value at) Derefrence Operator
    cout << "The value at address b is: " << *b << endl;

}