package algorithm;


/**
 * @program: leetcode
 * @description: 快排
 * @author: kechans
 * @create: 2020-03-28 23:00
 */
public class quickSort {
    private void sort(int arr[],int left,int right){

        if(left < right){
            int index = quicksort(arr,left,right);
            sort(arr,left,index-1);
            sort(arr,index+1,right);
        }
    }
    private int quicksort(int arr[],int l,int r){

        int index = arr[r];
        int i = l;
        int j =r;
        while(i < j){
                while (i< j && arr[i] <= index){
                    i++;
                }
                arr[j] = arr[i];
                while (i<j && arr[j] > index){
                    j--;
                }
                arr[i] = arr[j];
        }
        arr[i] = index;
        return i;
    }

    public static void main(String[] args) {
        int arr[] = new int[] {11,7,5,23,98};

        quickSort qs = new quickSort();
        qs.sort(arr,0,4);
        heapSort.show(arr);
    }
}
