#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing done" << endl;
}
int main()
{

    int fourth[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int n = 4;
    printArray(fourth, 10);

    //-----------------------------------------------------//

    int fourthSize = sizeof(fourth) / sizeof(int);

    cout << "Size of fourth is: " << fourthSize << endl;

    //------------------------------------------------------//

    int third[15] = {2, 7};

    printArray(third, 15);

    int thirdSize = sizeof(third) / sizeof(int); //sizeof

    cout << "Size of third is: " << thirdSize << endl;

    return 0;
}