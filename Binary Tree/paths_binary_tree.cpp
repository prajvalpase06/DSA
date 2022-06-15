#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<string> ans;

    void util(TreeNode *root, string ti)
    {

        if (!root->left and !root->right)
        {
            ans.push_back(ti);
            return;
        }

        if (root->left)
            util(root->left, ti + "->" + to_string(root->left->val));
        if (root->right)
            util(root->right, ti + "->" + to_string(root->right->val));
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {

        if (!root)
            return ans;

        util(root, to_string(root->val));
        return ans;
    }
};