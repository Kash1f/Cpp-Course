#include <iostream>
using namespace std;

int power(int a, int b)
{

    // int a,b;
    // cin >> a >> b;
    //  int ans = 1;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;

        // .In the first iteration of the loop(i = 1), ans becomes 2 * 1 = 2
        // .In the second iteration(i = 2), ans becomes 2 * 2 = 4
        //  .In the third iteration(i = 3), ans becomes 2 * 4 = 8
        //  .In the fourth and final iteration(i = 4), ans becomes 2 * 8 = 16.
    }

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