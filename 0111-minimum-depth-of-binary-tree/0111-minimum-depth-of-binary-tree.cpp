/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int shortestpath(TreeNode*root){
    //bc
    if ( root==NULL) return 0;
    if ( root->left==NULL&&root->right==NULL){
        return 1;
    }
  

    // any one is null
  if ( root->left==NULL){
    return 1+shortestpath(root->right);
  }

  if ( root->right==NULL){
    return 1+shortestpath(root->left);
  }

    // both children exist
    return 1 + min(shortestpath(root->left),
                   shortestpath(root->right));
}


    int minDepth(TreeNode* root) {
        return shortestpath(root);
  
    }
};