class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};


//夹逼排序
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // int left = nums[0];
        int len = nums.size()-1;
        //int right = nums[len-1];
        vector<int> v;
        int i= 0;
        int j= len;
        while( i<j ){
            int value = nums[i] + nums[j];
            if( value == target){
                v.push_back(i);
                v.push_back(j);
                return v;
            }else if(value < target){
                i++;
            }else if(value > target){
                j--;
            }
        }
        return v;
    }
};

