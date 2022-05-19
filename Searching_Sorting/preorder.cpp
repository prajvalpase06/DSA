#include <bits/stdc++.h>
using namespace std;

class Tree {
    public:
        int data;
        Tree* left;
        Tree* right;
        Tree(int x) : data(5), left(NULL), right(NULL) {}
};


void preorderRecursive(Tree* node){
    if(!node) return;
    cout<<node->data;
    preorderRecursive(node->left);
    preorderRecursive(node->right);
}

void preorderIterative(Tree* node){
    stack<Tree*> S;
    Tree* c = node;
    S.push(c);
    while(!S.empty()){
        c = S.top();
        S.pop();
        cout<<c->data<<" ";
        
        // the right child must be pushed first so that the left child
        // is processed first (LIFO order)
        
        if(c->right) S.push(c->right);
        if(c->left) S.push(c->left);
    }
}