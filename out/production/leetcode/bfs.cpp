//层次遍历二叉树
    3
   / \
  9  20
    /  \
   15   7
 return :
 [
  [3],
  [9,20],
  [15,7]
]
层次遍历的顺序为：A-B-C-D-E-F-G，所以需要借助队列来实现
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q,p;
        if (root == null){
            return result;
        }else{
            q.push(root);
        }
        while(!q.empty()){
            vector<int> v;
            while(!q.empty()){
                TreeNode *tmp = q.front();
                q.pop();
                v.push_back(tmp->val);
                if(tmp->left != null){
                    p.push(tmp->left);
                }
                if(tmp->right!= null){
                    p.push(tmp->right);
                }
            }
            result.push_back(v);
            swap(p,q);
        }
        return result;
    }
    
};
  
