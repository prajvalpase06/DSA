class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(!root) return root;
        if(root == p and root==q) return root;

        node* left = lowestCommonAncestor(root->left, p, q);
        node* right = lowestCommonAncestor(root->right, p, q);

        if(left and right) return root;
        if(!left and !right) return NULL;

        return left ? left : right;

     }
};
