package algorithm;

/**
 * @program: leetcode
 * @description: 堆排序
 * @author: kechans
 * @create: 2020-03-28 20:48
 */
public class heapSort {
    /**
     * @Description heapify
     * @Date  2020/3/28 21:10
     * @Param [arr, n, i]
     * @return void
     **/
    public static void heapify(int arr[], int n, int i){
        if(i >= n){
            return ;
        }
        int c1 = 2*i+1;
        int c2 = 2*i+2;

        int max = i;
        if(c1<n && arr[c1] > arr[max]){
            max = c1;
        }
        if(c2<n && arr[c2] > arr[max]){ 
            max = c2;
        }
        if(max != i){
            swap(arr,max,i);
            //show(arr);
            heapify(arr,n,max);
        }
    }

    public static void buildSwap(int arr[],int n){
        int lastNode = n-1;
        int parent = (lastNode-1)/2;
        for(int i = parent;i>=0;i--){
            heapify(arr,n,i);
        }
    }

    public static void heapSort(int arr[],int n){
        buildSwap(arr,n);

        for (int i=n-1;i>=0;i--){
            swap(arr,i,0);
            heapify(arr,i,0);
        }
    }

    public static void swap(int arr[],int i,int j){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    public static void show(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    /**
     * @Description main
     * @Date  2020/3/28 20:48
     * @Param [args]
     * @return void
     **/
    public static void main(String[] args) {

        int arr[] = new int[] {2,5,3,1,10,4};
        heapSort(arr,6);
        show(arr);
    }
}
