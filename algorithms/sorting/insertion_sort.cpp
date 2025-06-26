#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,2,6,11, 92, 0, 13, 432, 135, 3, 0, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    /* 
        at any point compare a number with the number at its left
        if its not in sorted position, then shift it to its right, 
        repeat the process until the number reaches its sorted position
    */

    for (int i = 1; i < arrLen; i++) {
        int current = arr[i]; // 2
        int j = i - 1; // 0

        while (arr[j] > current && j >= 0) { // arr[0] = 4 > 2 && j >= 0
            arr[j + 1] = arr[j]; // arr[0 + 1] = arr[0] : 2 = 4
            j--; // -1
        }
        arr[j + 1] = current;
    }

    for (auto i : arr) {
        cout << i << " , ";
    }
    cout << endl;


    return 0;
}