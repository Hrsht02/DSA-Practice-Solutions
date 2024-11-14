#include <iostream>
using namespace std;

int linear_search(int *arr, int n, int key){
    for (int i=0; i<n; i++){
        if(arr[i] == key) {
            return i;

        }
    }
    return -1;
}


int main() {
    int arr[] = {45,5,1,8,7,45,14,787,15};
    int n = sizeof(arr) / sizeof(int);
    
    cout << linear_search(arr, n, 787);

    return 0;
}
