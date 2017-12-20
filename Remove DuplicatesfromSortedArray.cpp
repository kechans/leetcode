class Solution {
public:
     vector<int> removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int j=0;
        for (int i = 1;i < nums.size();i++){
            if(nums[i] != nums[j]){
                nums[i] = nums[j];
                j++;
            }
        }
        return nums;
    }
};
