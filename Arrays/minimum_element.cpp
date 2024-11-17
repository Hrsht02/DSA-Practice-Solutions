#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 87, 15, 454, 581, 12, 4, 458};
    int n = sizeof(arr) / sizeof(int);

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum Element in array: " << min << endl;
    return 0;
}
