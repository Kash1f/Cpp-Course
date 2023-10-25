#include<iostream>
using namespace std;


void printArray(){
    
}
int main(){


    //declaring an array
    // int number[15];

    //accessing an array
    // cout << "Value at index number: " << number[14] << endl;

    //intializing an array

    int second[3] = {5,7,11};

    cout << "The value of the 2nd index is: " << second[2] << endl;

    //printing an array

    int third[15] = {2,7};  //initializing an array

    int n = 15; //declaring a var to use it with loop to print all array values

    for(int i = 0; i < n; i++){  //i=0 bcz array starts from 0 till n-1(0-15) here
        cout << third[i] << " " ;
    }



    return 0;

}