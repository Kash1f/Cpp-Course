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

    /* 
    
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

    char ch = 98;
    cout << ch << endl;

*/
    

    int a = 2/5;  //output will be an int i.e 0 and not 0.4 which is the correct answer becasue int/int = int
    cout << a << endl;

    int ab = 2.0/5;    //output will be an int because the var is initialized with int
    cout << ab << endl;

    float abc = 2.0/5; //the ans will be float value 0.4(right ans) since float/int = float
    cout << abc << endl;

    double abcd = 2.0/5; //same ans as with float as double/int = double
    cout << abcd << endl;

    int a_a = 10/5;
    cout << a_a << endl;  
    

    string fullName;

    cout << "My fullname is: " << endl;

    getline(cin, fullName);

    cout << "My fullname is: " << fullName << endl;








}
