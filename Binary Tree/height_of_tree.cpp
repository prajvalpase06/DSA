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
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(!node) return 0;
        if(!(node->left) and !(node->right)) return 1;
        else return 1+max(height(node->left), height(node->right));
    }
};
