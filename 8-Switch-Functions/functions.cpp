#include <iostream>
using namespace std;

int power(int num1, int num2)
{

    //int a,b;
    //cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }

    // cout << "Answer is: " << ans << endl;

    return ans;
}

int main()
{

    //  int answer = power();
    // cout << "Answer is: " << answer << endl;


    int a, b;
    cin >> a >> b;

    int answer = power(a, b);
    cout << "Answer is: " << answer << endl;

    int c, d;
    cin >> c >> d;

    int answer2 = power(c, d);
    cout << "Answer is: " << answer2 << endl;

    return 0;
}