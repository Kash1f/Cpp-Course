#include <iostream>
using namespace std;

int main()
{

    // int a;
    // int *p;

    // a = 10;
    // p = &a; //address of a

    // cout << "The address of a is: " << &a << endl;
    // cout << "The value at address p is: " << *p << endl;

    // int b = 20;
    // *p = b; //Will the address in p change to point b

    // cout << "The The address of b is: " << p << endl;
    // cout << "The value at address p is: " << *p << endl;

    // Arithmetic Pointers

    int a = 10;
    int *p;

    p = &a;

    cout << "The address of p is:" << p << endl;

    cout << "The address of p is:" << *p << endl;

    cout << "The address of p is:" << p + 1 << endl;

    cout << "The Address of p+1 is" << *(p + 1) << endl; // incrementing the address
}