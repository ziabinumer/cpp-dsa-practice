#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,2,6,11, 92, 0, 13, 432, 135, 3, 0, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrLen - 1; i++) {
        for (int j = 0; j < arrLen - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (auto i : arr) {
        cout << i << " , ";
    }
    cout << endl;


    return 0;
}