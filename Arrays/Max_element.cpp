#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 1, 8, 15, 81, 18, 45, 458};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element is " << max << endl;
    return 0;
}
