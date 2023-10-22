#include <iostream>
using namespace std;

//Function Signature(int,void etc)
void printCounting(int n){

    //Function Body
    for (int i = 1; i <= n; i++){
        cout << i << " " << endl;
    }
}

int main(){

    int a;

    cin>> a;

    //function call
    printCounting(a);

}