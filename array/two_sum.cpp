//哈希表方法

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.count(target - nums[i])) {//count判断元素是否在容器中
                return {i, m[target - nums[i]]};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};


//暴力轮训方法
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
class Solution { //仅仅适合于返回找到的元素，而不是返回元素的下表
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

