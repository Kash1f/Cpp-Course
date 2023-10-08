#include <iostream>
using namespace std;

int main()
{

   // int a;   //intializing the variable

   // cout << "Enter a value: ";
   // cin >> a;                     //taking input(value of a)

   // if (a > 0){
   //    cout << "A is positive" << endl;
   // } else {
   //    cout << "A is negative" << endl;
   // }

   int a, b; // initializing the variables

   cout << "Enter the value of a: " << endl;
   cin >> a; // taking input value for a

   cout << "Enter the value of b: " << endl;
   cin >> b; // taking the input value for b

   // cout << "value of a and b is " << a << " " << b << endl;

   // checking the value of both the variables i.e a & b
   if (a > b)
   {
      cout << "A is greater" << endl;
   }
   if (b > a)
   {
      cout << "B is greater" << endl;
   }
}
