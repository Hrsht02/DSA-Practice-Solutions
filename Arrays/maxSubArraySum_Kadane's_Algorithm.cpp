#include <iostream>
#include <algorithm>
using namespace std;

void maxSubArraySum(int *Array, int n)
{
    int currSum = 0, maxSum = Array[0];
    for (int i = 0; i < n; i++)
    {
        currSum += Array[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Max Sub Array Sum = " << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArraySum(arr, n);
    return 0;
}
