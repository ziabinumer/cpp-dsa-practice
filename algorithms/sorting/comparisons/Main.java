import sorts.BubbleSort;
import sorts.SelectionSort;
import sorts.MergeSort;
import java.util.Arrays;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int size = 100000; 
        int[] original = new int[size];

        // random fill
        Random rand = new Random();
        for (int i = 0; i < size; i++) {
            original[i] = rand.nextInt(1_000_000); 
        }

        // BubbleSort
        int[] bubbleArr = Arrays.copyOf(original, original.length);
        long start = System.nanoTime();
        BubbleSort.sort(bubbleArr);
        long end = System.nanoTime();
        System.out.printf("BubbleSort: Time: %.3f ms%n", (end - start) / 1_000_000.0);

        // SelectionSort
        int[] selectionArr = Arrays.copyOf(original, original.length);
        start = System.nanoTime();
        SelectionSort.sort(selectionArr);
        end = System.nanoTime();
        System.out.printf("SelectionSort: Time: %.3f ms%n", (end - start) / 1_000_000.0);

        // MergeSort
        int[] mergeArr = Arrays.copyOf(original, original.length);
        start = System.nanoTime();
        MergeSort.sort(mergeArr);
        end = System.nanoTime();
        System.out.printf("MergeSort: Time: %.3f ms%n", (end - start) / 1_000_000.0);

        if (Arrays.equals(bubbleArr, selectionArr) && Arrays.equals(selectionArr, mergeArr)) {
            System.out.println("All sorts produced the same result!");
        } else {
            System.out.println("Sorting mismatch detected!");
        }
    }
}
