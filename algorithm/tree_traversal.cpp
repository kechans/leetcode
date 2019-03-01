前序遍历：  root->left->right

后序遍历：  left->right->root

中序遍历：  left->root->right

//深度优先遍历就是前序遍历
vector<int> firsttraver(TreeNode* root){//使用栈，时间复杂度o(n),空间复杂度o(n);
  vertor<int> v;
  stack<TreeNode*> s;
  if(root != null){
    s.push(root);
   }
  while(!s.empty()){
    TreeNode* tmp = s.top();
    s.pop();
    v.push_back(tmp->val);
    if(tmp->right != null) {
      s.push(tmp->right);
    }
    if(tmp->left != null){
      s.push(tmp->right);
    }
  }
  return v;
}

中序遍历 
vector<int> innertraver(TreeNode* root){
  
}
