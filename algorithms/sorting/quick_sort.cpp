#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int index = start - 1; int pivot = arr[end];

    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            index++;
            swap(arr[i], arr[index]);
        }
    }
    index++;
    swap(arr[end], arr[index]);
    return index;
}


void quickSort(int arr[], int start, int end) {
    if (start <= end) {
        int pivot_index = partition(arr, start, end);

        quickSort(arr, start, pivot_index - 1);
        quickSort(arr, pivot_index+1, end);
    }
}

int main() {
    int arr[] = {4,2,6,11, 92, 0, 13, 432, 135, 3, 0, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, arrLen - 1);

    for (auto i : arr) {
        cout << i << " , ";
    }
    cout << endl;


    return 0;
}