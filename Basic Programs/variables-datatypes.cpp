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
    
    int a = 123;            // 4 bytes = 32 bits of memory
    cout << a << endl;

    char c = 'a';           // 1 byte =8 bits of memory
    cout << c << endl;

    bool bl = true;         // 1 bit of memory
    cout << bl << endl;

    float f = 1.2;          // 8 bytes = 64 bits of memory
    cout << f << endl;

    double d = 1.23;        // 8 bytes = 64 bits of memory
    cout << d << endl;

    int size = sizeof(a);   //size of tells the size of the datatype that is being occupied
                            //on the memory 

    cout << "Size of a is: " << size << endl; //string




}
