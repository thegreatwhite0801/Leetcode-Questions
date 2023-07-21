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
    bool bst_checker(TreeNode* root, TreeNode* max,TreeNode* min) {
        if (!root)
            return true; 

        if ((max && root->val >= max->val) || (min && root->val <= min->val))
            return false; 

        return bst_checker(root->left, root, min) && bst_checker(root->right, max, root);
    }

    bool isValidBST(TreeNode* root) {
        return bst_checker(root, nullptr, nullptr);        
    }
};
