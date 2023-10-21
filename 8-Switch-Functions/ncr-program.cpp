#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{

    int numerator = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    int ans = numerator / denom;

    return ans;
}

int main(){

    int n,r;

    cin>> n >> r;

    cout << "Answer is: " << nCr(n,r);


    return 0;
}