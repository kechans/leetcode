class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.empty()){
            return nums;
        }
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<int> v;
        while(i<j){
            int value=nums[i]+nums[j];
            if(value < target){
                i++;
            }else if(value > target){
                j--;
            }else{
                v.push_back(i);
                v.push_back(j);
            }
        }
        return v;
    }
};
