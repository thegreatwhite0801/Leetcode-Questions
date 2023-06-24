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
    
    bool checker(TreeNode *p ,TreeNode*q){
        if(!p &&!q)return true; 
        if((!p&&q)||(p&&!q)||(p->val != q->val))return false; 
        return checker(p->left,q->left) && checker(p->right,q->right);
    }
    bool flag= false;
    
    void traversal(TreeNode*root,TreeNode* subroot){
       if(root==NULL)return ; 
        if((root->val)==(subroot->val))flag=flag || checker(root,subroot); 
        traversal(root->left,subroot);
        traversal(root->right,subroot); 
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        traversal(root,subRoot); 
        return flag; 
    }
};