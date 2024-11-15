#include <iostream>
using namespace std;

int binary_search(int *arr, int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {12, 24, 45, 49, 58, 78, 544, 593, 785, 989};
    int n = sizeof(arr) / sizeof(int);

    cout << binary_search(arr, n, 544) << endl;
    return 0;
}
