#include <iostream>
using namespace std;

int main()
{
    // Notes:
    // variables cannot start from numbers
    // abc
    // ABC
    // A1
    // a_1
    // 1abc
    // abc1
    // _abc1
    
    int abc = 123;            // 4 bytes = 32 bits of memory
    cout << abc << endl;

    char b = 'b';           // 1 byte =8 bits of memory
    cout << b << endl;

    bool bl = true;         // 1 bit of memory
    cout << bl << endl;

    float f = 2.2;          // 8 bytes = 64 bits of memory
    cout << f << endl;

    double d = 2.23;        // 8 bytes = 64 bits of memory
    cout << d << endl;

    int size = sizeof(b);   //size of tells the size of the datatype that is being occupied
                            //on the memory 

    cout << "Size of a is: " << size << endl; //string

    int a = 'a';
    cout << a << endl;


}
