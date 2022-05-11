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

vector<int> reverseLevelOrder(Node* root){
    vector<int> vec;
    stack<Node*> s;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* cur = q.front();
        s.push(cur);
        q.pop();

        if(cur->right) q.push(cur->right);
        if(cur->left) q.push(cur->left);

    }

    while(!s.empty()){
        vec.push_back(s.top()->data);
        s.pop();
    }
    return vec;
}
