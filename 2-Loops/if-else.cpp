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



//PROGRAM TO CHECK WHICH NUMBER IS GREATER

 /*

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
*/

//PROGRAM TO CHECK IF A IS POSITIVE, NEGATIVE OR 0

   int b;

   cout << "Enter the value of b: " << endl;
   cin >> b;

   if (b > 0){
      cout << " A is positive" << endl;
   } 
   else if ( b < 0) {
       cout << " A is negative" << endl;
   } else{
       cout << " A is 0" << endl;
   }


   int a,c;

   cout << "Enter the value of a: " << endl;
   cin >> a;

   cout << "Enter the value of c: " << endl;
   cin >> c;


   if (a > c){
      cout << "A is greater" << endl;
   } else if (c > a){
      cout << "C is greater" << endl;
   } else if (a && c ==0){
      cout << "A and B is equal to zero" << endl;
   }











}
