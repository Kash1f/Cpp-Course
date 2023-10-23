#include <iostream>
using namespace std;

//Function Signature(int,void etc)
void dummy(int n){

    n++;
    cout << "n is: " << n << endl;
}

int main(){

    int n;

    cin>> n;

    dummy(n);

    cout << "This is a number " << n << endl;
  

}