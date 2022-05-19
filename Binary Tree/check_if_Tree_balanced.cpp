#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int height(Node* root){
        if(!root) return 0;
        if(root->left == NULL and root->right == NULL) return 1;
        else return 1+max(height(root->left), height(root->right));
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        if (root == NULL)
        return 1;
        
        int balance = abs(height(root->left) - height(root->right));
        if(balance<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        return false;
    }
};