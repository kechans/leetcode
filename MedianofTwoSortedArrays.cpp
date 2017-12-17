#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double solution(vector<int>& nums1, vector<int>& nums2) {
			if(nums1.size() <= 0 && nums2.size()<=0){
				return 0;
			}
			vector<int> res;
			for(int i=0;i<nums1.size();i++){
				res.push_back(nums1[i]);
			}
			for(int i=0;i<nums2.size();i++){
				res.push_back(nums2[i]);	
			}
			sort(res.begin(),res.end());
			int index=res.size();
			cout<<index<<endl;
			if(index % 2== 0){
				return (double)(res[index/2]+res[index/2-1])/2;
			}else{
				return (double)res[index/2];
			}
	 }

	 double solution2(vector<int>& nums1,vector<int>& nums2){
					
	 }
};

int main() {
	vector<int> v1={1,2};
	vector<int> v2={3,4};
	Solution s;
	double d=s.solution(v1,v2);
	cout<<d<<endl;
	return 0;
}
