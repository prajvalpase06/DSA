#include <bits/stdc++.h>
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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;

    /* Recursize Solution */
        if(root->left == NULL and root->right == NULL) return root;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        
        return root;
        
    /* iterative Solution */
        queue<TreeNode*> q;
        q.push(root);
                
        //standard BFS
        while(!q.empty()){
            TreeNode* n = q.front();
            q.pop();
            
            if(n->left != NULL) q.push(n->left);
            if((n->right)) q.push(n->right);
            
            TreeNode* t = n->left;
            n->left = n->right;
            n->right = t;
        }
        
        return root;
    }
};
