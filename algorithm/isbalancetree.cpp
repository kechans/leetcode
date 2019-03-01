
bool isbalancetree(TreeNode* root){
  if(root == null){
    return true;
  }
  int left = isbalancetree(root->left);
  int right = isbalancetree(root->right);
  if(left < 0 || right < 0 || abs(left-right)<1){
    return false;
  }
  return max(left-right)+1;
}
