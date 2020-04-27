import java.util.Arrays;

/**
 * @Description
 * @Date  2020/4/27 17:16
 * @Param
 * @return
 **/
class findMedianSortedArrays {

    public static double findMedianSortedArrays_1(int[] nums1, int[] nums2) {

        int length = nums1.length + nums2.length;
        int length1 = nums1.length;
        int length2 = nums2.length;
        if(length1 > 0 && length2 == 0 ){
            if(length1 % 2 == 0){
                return (nums1[length1/2-1]+nums1[length1/2])/2.0;
            }else{
                return nums1[length1/2];
            }
        }
        if(length2 > 0 && length1 == 0 ){
            if(length2 % 2 == 0){
                return (nums2[length2/2-1]+nums2[length2/2])/2.0;
            }else{
                return nums2[length2/2];
            }
        }
        int i = 0;
        int j = 0;
        int count = 0;
        int[] tmp = new int[length1+length2];
        while (count < (length1 + length2)){
            if(i == length1){
                while (j < length2){
                    tmp[count++] = nums2[j++];
                }
                break;
            }
            if(j == length2){
                while (i < length1){
                    tmp[count++] = nums1[i++];
                }
                break;
            }
            if(nums1[i] < nums2[j]){
                tmp[count++] = nums1[i++];
            }else{
                tmp[count++] = nums2[j++];
            }
        }
        if (length %2 == 0){
            return (tmp[length/2-1]+tmp[length/2])/2.0;
        }else{
            return tmp[length/2];
        }
    }

    private static double findMedianSortedArrays_2(int[] nums1,int[] nums2) {
        int length = nums1.length + nums2.length;
        if(length % 2 == 1){
            return findkth(nums1,nums2,0,0,length/2+1);
        }else{
            return (findkth(nums1,nums2,0,0,length/2) + findkth(nums1,nums2,0,0,length/2+1))/2.0;
        }
    }

    private static double findkth(int[] nums1, int[] nums2, int i, int j, int k) {
        int result = 0;
        int cnt = 0;
        while (i < nums1.length && j < nums2.length && cnt < k){
            if(nums1[i] < nums2[j]){
                result = nums1[i];
                i++;
                cnt++;
            }else{
                result = nums2[j];
                j++;
                cnt++;
            }
        }
        while (i < nums1.length && cnt <k){
            result = nums1[i];
            i++;
            cnt++;
        }
        while (j < nums2.length && cnt <k){
            result = nums2[j];
            j++;
            cnt++;
        }
        return result;
    }

    public static void main(String[] args) {
        int[] nums1 = {1,3,5,7};
        int[] nums2 = {};
        double res_1 = findMedianSortedArrays_1(nums1,nums2);
       // System.out.println(res_1);

        //  ----->
        double res_2 =findMedianSortedArrays_2(nums1,nums2);
        System.out.println(res_2);
    }


}