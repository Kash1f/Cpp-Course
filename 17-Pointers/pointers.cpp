#include<iostream>
using namespace std;


int main(){

    // &---> (Address of) Operator
    int a = 3;
    int*b = &a;

    cout << "The address of a is: " << &a << endl;

    // *--->   (value at) Derefrence Operator
    cout << "The value at address  b is: " << *b << endl;

}