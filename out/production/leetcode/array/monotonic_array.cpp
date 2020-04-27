class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        return increase(A)||increase1(A);
    }
    bool increase(vector<int> A){
        for(int i=0;i<A.size()-1;i++){
            if(A[i] > A[i+1]){
                return false;
            }
        }
        return true;
    }
        
    bool increase1(vector<int> A){
        for(int i=0;i<A.size()-1;i++){
            if(A[i] < A[i+1]){
                return false;
            }
        }
        return true;
    }
};

