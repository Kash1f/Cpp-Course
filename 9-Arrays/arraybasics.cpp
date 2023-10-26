#include <iostream>
using namespace std;

void printArray()
{
}
int main()
{

    // declaring an array
    //  int number[15];

    // accessing an array
    //  cout << "Value at index number: " << number[14] << endl;

    /////// intializing an array

    int second[3] = {5, 7, 11};

    cout << "The value of the 2nd index is: " << second[2] << endl;

    ///////printing an array

    int third[15] = {2, 7}; // initializing an array

    int a = 15; // declaring a var to use it with loop to print all array values

    for (int i = 0; i < a; i++)
    { // i=0 bcz array starts from 0 till n-1(0-15) here
        cout << third[i] << " ";
    }

    /////// initializng all locations with 0

    int fourth[10] = {0};

    int b = 10;

    for (int i = 0; i < b; i++){ // i=0 bcz array starts from 0 till n-1(0-15) here
        cout << fourth[i] << " ";
    }

    //////initializng all locations with 1(not possible with below line)

    int fifth[10] = {1};

    int c = 10;

    for (int i = 0; i < c; i++) {  // i=0 bcz array starts from 0 till n-1(0-15) here
        cout << fifth[i] << " ";
    }


    //array of a character 

    char ch[5] = {'a','b','c','d','e'};
    cout << ch[3] << endl;


      for (int i = 0; i < 5; i++) {   //looping through characters
        cout << ch[i] << " ";
    }




    cout << "Everything is fine" << endl;       

    return 0;

    
}