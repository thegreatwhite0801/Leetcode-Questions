class Solution {
public:
   int count= 0 ;
    void dfs(TreeNode*root,int max){
        if(root==NULL)return ; //if root is null ,end recursion 
        if(root->val>=max){count++ ;max=root->val;}
        dfs(root->right,max) ;
        dfs(root->left,max) ;
        
    }
    
    
    int goodNodes(TreeNode* root) {
        dfs(root,INT_MIN) ;
        return count ;
    }
};