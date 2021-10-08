import java.util.Arrays;
public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {900,-91,34,1,1000,1,0};
        // bubblesort
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if(arr[i] > arr[j]){
                    //swap
                    arr[i] = arr[i]^arr[j];
                    arr[j] = arr[i]^arr[j];
                    arr[i] = arr[i]^arr[j];
                }
            }
        }
        System.out.println(Arrays.toString(arr));
    }
}
