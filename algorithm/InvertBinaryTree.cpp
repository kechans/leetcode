/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
      4                                              
   /   \          转换为下图的树
  2     7
 / \   / \
1   3 6   9

     4
   /   \
  7     2
 / \   / \
9   6 3   1

//递归
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root ==NULL){
            return root;
        }
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

//迭代

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root ==NULL){
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* tmp =q.front();
            swap(tmp->left,tmp->right);
            if(tmp->left!=NULL){
                q.push(tmp->left);
            }
            if(tmp->right!=NULL){
                q.push(tmp->right);
            }
            q.pop();
        }
        return root;
    }
};
