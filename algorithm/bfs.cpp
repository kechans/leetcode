//层次遍历二叉树
/*
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
 // cpp version
 /*
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
  
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
一个队列加一个栈实现
class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        // 考虑边缘情况
        if (root != nullptr)
        {
            q.push(root);
        }
        // 一直遍历直到队列里为空
        while (!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();
            res.push_back(curr->val);
            if (curr->left != nullptr)
            {
                q.push(curr->left);
            }
            if (curr->right != nullptr)
            {
                q.push(curr->right);
            }
        }

        return res;
    }
};
