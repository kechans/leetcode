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
    bool isValidBST(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        if(root->val > root->left->val && root->val < root->right->val)
        {
            return true;
        }
        if(root->left != NULL){
            return isValidBST(root->left);
        }
        if(root->right != NULL){
            return isValidBST(root->right);
        }
    }
};
