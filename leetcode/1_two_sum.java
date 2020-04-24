// https://leetcode-cn.com/problems/two-sum/submissions/
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

//
class Solution {
    public  int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> m  = new HashMap<>();
        for (int i = 0;i<nums.length;i++){
            int index = target - nums[i];
            if(m.containsKey(index)){
                return new int[] {m.get(index),i};
            }
            m.put(nums[i],i);
        }
        return new int[] {0,0};
    }
    public static void main(String[] args) {

        int[] arr = {3,2,4};
        Solution s = new Solution();
        System.out.println(Arrays.toString(s.twoSum(arr,6)));
    }
}

