class Solution {
public:

    int util(TreeNode* root, bool isLeft){
        if(!root) return 0;
        if(!root->left and !root->right) return isLeft ? root->val : 0;
        return util(root->left, true) + util(root->right, false);
    }

    int sumOfLeftLeaves(TreeNode* root) {
       return util(root, false);
    }

};
