#include <bits/stdc++.h>
using namespace std;

class Tree {
    public:
        int data;
        Tree* left;
        Tree* right;
        Tree(int x) : data(5), left(NULL), right(NULL) {}
};

void inorder_recursive(Tree* node){
    if(!node) return;
    inorder_recursive(node->left);
    cout<<node->data;
    inorder_recursive(node->right);
}


// Use Stack
void inorderIterative(Tree* node){
    stack<Tree*> S;
    Tree* c = node;
    while(!S.empty() || c){    
        if(c) {
            S.push(c);
            c = c->left;
        }
        else{
            c = S.top();
            S.pop();
            cout<<c->data<<" ";
            c=c->right;
        }
    }
}


