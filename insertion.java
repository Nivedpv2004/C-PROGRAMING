public class InsertionSort {
    public static void insertionSort(int[] arr) {
        int n = arr.length;
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6};

        System.out.println("Original array:");
        for (int value : arr) {
            System.out.print(value + " ");
        }

        insertionSort(arr);

        System.out.println("\nSorted array:");
        for (int value : arr) {
            System.out.print(value + " ");
        }
    }
}
