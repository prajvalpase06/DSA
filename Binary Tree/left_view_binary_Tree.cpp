#include <bits/stdc++.h>
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


void leftView(Node* root){
    queue<Node*> q;

    if(!root) return;

    q.push(root);

    while(!q.empty()){
        int i=0;
        int s = q.size();
        while(i<=s){
            Node* temp = q.front();
            q.pop();
            
            if(i == 1){             // to get the first (leftmost node of all levels)
                cout<<temp->data<<" ";
            }

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

            i++;
        }
    }
}