class Binsearch {
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length -1;
        while (left <= right){
            int middle = (left+right)/2;
            if(nums[middle] > target){
                right = middle-1;
            }else if(nums[middle] < target){
                left = middle+1;
            }else{
                return middle;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = new int[] { 12, 23, 34, 45, 56, 67, 77, 89, 90 };
        Binsearch s = new Binsearch();
        s.search(arr,23);
    }
}