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

中序遍历 思路
从根节点开始，先将根节点压入栈

然后再将其所有左子结点压入栈，取出栈顶节点，保存节点值

再将当前指针移到其右子节点上，若存在右子节点，则在下次循环时又可将其所有左子结点压入栈中
vector<int> innertraver(TreeNode* root){
         stack<TreeNode*> s;
        vector<int> v;
        const TreeNode* p = root;
        while(!s.empty() || p!=NULL){
            if(p != NULL){
                s.push(p);
                p =p->left;
            }else{
                p =s.top();
                s.pop();
                v.push_back(p->val);
                p = p->right;
            }
        }
        return v;
}
