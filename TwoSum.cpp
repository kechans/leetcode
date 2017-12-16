#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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
					 break;
            }
        }
        return v;
    }
};

int main()
{
	vector<int> v={2,7,11,15};
	vector<int> res;
	Solution s;
	res=s.twoSum(v,9);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}
	return 0;
}
