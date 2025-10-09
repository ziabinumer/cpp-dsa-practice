package sorts;

public class SelectionSort {
    public static void sort(int[] arr) {
        int len = arr.length;

        for (int i = 0; i < len; i++) {
            int index = i;
            for (int j = i + 1; j < len; j++) {
                if (arr[j] < arr[index]) index = j;
            }
            if (index == i) continue;
            int tmp = arr[index];
            arr[index] = arr[i];
            arr[i] = tmp;
        }
    }
}

// 4,2,0,3
// 0, 2, 4, 3
// 0, 2, 
