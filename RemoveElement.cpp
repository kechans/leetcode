class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()){
            return 0;
        }
       for(vector<int>::iterator iter=nums.begin(); iter!=nums.end(); )  
       {  
            if( *iter == val)  
                iter = nums.erase(iter);  
            else  
                iter ++ ;  
}  
        return nums.size();
    }
};
