#include <iostream>
using namespace std;

int main()
{

    int marks[5] = {23, 32, 44, 54, 98};

    cout << "The marks are: " << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    int mathMarks[4];

    mathMarks[0] = 89;
    mathMarks[1] = 88;
    mathMarks[2] = 98;
    mathMarks[3] = 99;

    cout << "The math marks are: " << endl;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks: " << i << endl;
    }

    int *p = marks;

    cout << "The value of marks is: " << *p << endl;
    cout << "The value of marks is: " << *(p+1) << endl;
}