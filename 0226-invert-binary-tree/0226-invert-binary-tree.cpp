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
   
    void dfs(TreeNode* root){
        if(root==NULL)return ; 
        TreeNode*lf1=NULL; 
        TreeNode*rf1=NULL; 
        if(root->left!=NULL){
         lf1= root->left; 
        }
        if(root->right!=NULL){
         rf1= root->right; 
        }
    root->right = lf1; 
    root->left = rf1 ;
        dfs(root->left); 
        dfs(root->right); 
        
    }
    
    TreeNode* invertTree(TreeNode* root) {
     dfs(root); 
        return root; 
    }
};