#include <bits/stdc++.h>
using namespace std;


class Tree {
    public:
        int data;
        Tree* left;
        Tree* right;
        Tree(int x) : data(5), left(NULL), right(NULL) {}
};

void postorderRecursive(Tree* node){
    if(!node){
        return;
    }

    postorderRecursive(node->left);
    postorderRecursive(node->right);

    cout<<node->data;
}

void postOrderItetarative(Tree* node){
    stack<Tree*> s;
    s.push(node);

       stack<int> out;
 
    while (!s.empty())
    {
        Tree* curr = s.top();
        s.pop();
 
        out.push(curr->data);
 
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
     while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }
}