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

   // int b;

   // cout << "Enter the value of b: " << endl;
   // cin >> b;

   // if (b > 0){
   //    cout << " A is positive" << endl;
   // } 
   // else if ( b < 0) {
   //     cout << " A is negative" << endl;
   // } else{
   //     cout << " A is 0" << endl;
   // }

//with two variables
   // int a,c;

   // cout << "Enter the value of a: " << endl;
   // cin >> a;

   // cout << "Enter the value of c: " << endl;
   // cin >> c;


   // if (a > c){
   //    cout << "A is greater" << endl;
   // } else if (c > a){
   //    cout << "C is greater" << endl;
   // } else {
   //    cout << "A and B are equal to zero" << endl;
   // }

//homework -> output questions

//    int a = 9;
//    if (a == 9) {
//       cout << "NINEY" << endl;
//    }

//    if ( a > 0) {
//       cout << "POSITIVE" << endl;
//    }

//    else{
//       cout << "NEGATIVE" << endl;
//    }

// //q2 -> output

//    int a_2 = 4;
//    int b = a+1;

//    if((a=3)==b) {
//       cout << a_2 << endl;
//    }

//    else {
//       cout << a_2 << endl;
//    }

// //q3-output

//    int a_3 = 24;

//    if (a_3 > 25){
//       cout << "Love" <<endl;
//    }
//    else if (a_3 == 24){
//       cout << "Lovely" <<endl;
//    }

//    else {
//       cout << "Babbar" << endl;
//    }

   // char ch;

   // cout << "Enter a character: " << endl;

   // cin >> ch;

   // if (ch >='a' && ch <= 'z'){
   //    cout << "This is lower case" << endl;
   // }
   // else if (ch>='A' && ch <= 'Z'){
   //    cout << "This is Upper case" << endl;
   // }
   // else if (ch >='0' && ch <= '9'){
   //    cout << "This is is numeric" << endl;
   // }



   //  int a = 'a';
   //  cout << a << endl;

   //  char chc = 98;
   //  cout << chc << endl;


   // int n;

   // cout << "Enter your number: " << endl;

   // cin >> n;

   // int i=1;
   // while (i<=n){
     
   //    cout << "The value of i is: " << i << endl;
   //      i = i + 1;
     
   // }
 
   int n;

   cout << "Enter a Number: " << endl;

   cin>> n;

   int i = 1;
   int sum = 0;

   while (i <= n){
      sum = sum + i;
      i = i + 2;
      cout << "The value of sum is: "<< sum  << endl;
      
   }










}
