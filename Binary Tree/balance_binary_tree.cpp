
 // * Definition for a binary tree node.
 #include<bits/stdc++.h>
 using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };

class Solution {
public:
    vector<TreeNode*> vec;

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        vec.push_back(root);
        inorder(root->right);
    }

    TreeNode* createTree(int start, int end){
        if(start > end) return nullptr;
        int mid = ( start + end ) / 2;
        TreeNode* root = vec[mid];
        root->left = createTree(start, mid-1);
        root->right = createTree(mid+1, end);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        if(!root) return NULL;
        inorder(root);
        root = createTree(0, vec.size()-1);
        return root;
    }
};
