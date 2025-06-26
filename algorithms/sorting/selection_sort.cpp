#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,2,6,11, 92, 0, 13, 432, 135, 3, 0, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrLen; i++) {
        int min_index = i;
        for (int j = 0; j < arrLen; j++) {
            if (arr[min_index] < arr[j]) {
                min_index = j;
            }

            if (min_index != i) {
                swap(arr[i], arr[min_index]);
            }
        }

    }

    for (auto i : arr) {
        cout << i << " , ";
    }
    cout << endl;


    return 0;
}