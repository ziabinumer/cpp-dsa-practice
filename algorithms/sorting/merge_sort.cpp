#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int size = end - start + 1;
    int* newArr = new int[size];
    int i = start; int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            newArr[k++] = arr[i++];
        }
        else {
            newArr[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        newArr[k++] = arr[i++];
    }

    while (j <= end) {
        newArr[k++] = arr[j++];
    }

    for (int p = 0; p < size; p++) {
        arr[start + p] = newArr[p];
    }

    delete[] newArr;
}

void mergeSort(int arr[], int start, int end) {
    if (start < end ) {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);

        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {4,2,6,11, 92, 0, 13, 432, 135, 3, 0, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arrLen - 1);

    for (auto i : arr) {
        cout << i << " , ";
    }
    cout << endl;


    return 0;
}