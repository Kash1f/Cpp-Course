#include <iostream>
using namespace std;

//Output 1 aya to Prime Number
//Output 0 aya to Not a Prime Number

bool isPrime(int n){


    for(int i = 2; i<n; i++){
        //agar divide hojai to not a prime number
        if(n%i ==0 ){
        return 0;
        }
    }
        return 1;       
}

int main(){

        int a;

        cin>>a;

        if(isPrime(a)){
        cout << "This is a Prime number";
        }
        else{
            cout << "This is not a Prime number";
        }
}