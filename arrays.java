import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class arrays{
    public static void main(String[] args) {
    int[] arr = {2,3,5,6,7};
    //swap(arr,1,3);
        //rev(arr);
        System.out.println(max(arr));

    }
    static int max(int[] arr){
        int maxVal =arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]>maxVal){
                maxVal = arr[i];
            }
        }
        return maxVal;
        }
}
