#include <iostream>
using namespace std;


//Output 1 dega incase of Even
//Output 0 dega incase of Odd
bool isEven(int a){
    
    //kisi bhi number ka &1 true ho to wo odd number hai

    //if the value of "a" is an odd number, then the result of the bitwise AND operation between "a" and 1 will be odd
    if(a & 1){
         return 0;      //0 return incase of odd
    }
    else{
        return 1;
    }
   
}



int main(){

    int num;

    cin>> num;

    if(isEven(num)){
        cout << "The number is even" << endl;
    }
    else{
        cout << "The number is odd" << endl;
    }

    return 0;
}