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
void leftnodeSum( TreeNode*root,int &sum){
//base case
if ( root==NULL){
    return ;
}
// leftleave
if (( root->left!=NULL&&root->left->left==NULL)&&root->left->right==NULL){
    sum = sum +root->left->val;
}
leftnodeSum(root->left,sum);
leftnodeSum(root->right,sum);


return ;

}

    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
leftnodeSum(root,sum);
return sum;

        
    }
};