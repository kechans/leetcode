/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {//前序遍历
        if(p == NULL && q == NULL){
            return true;
        }
        vector<int> v1;
        vector<int> v2;
        v1=gettree(p);
        v2=gettree(q);
        if(v1.size() == v2.size()){
            for(int i =0;i<v1.size();i++){
                if(v1[i] == v2[i]){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
    vector<int> gettree(TreeNode* root)
    {
        vector<int> v;
        if(root == NULL){
            return v;
        }
        
        v.push_back(root->val);
        if(root->left != NULL){
            //root=root->left;
            v=gettree(root->left);
        }
        if(root->right != NULL){
            // root=root->right;
             v=gettree(root->right);
        }
        return v;
    }
};
