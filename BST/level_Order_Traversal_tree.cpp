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

class Solution
{
   public:
   //Function to return the level order traversal of a tree.
   vector<int> levelOrder(Node* node)
   {
       vector<int>v;
       
       if(node==NULL)
       return v;
       
     queue<Node*>q;
     q.push(node);
     
     while(!q.empty())
     {
         if(q.front()->left)
         q.push(q.front()->left);
         
         if(q.front()->right)
         q.push(q.front()->right);
         
         v.push_back(q.front()->data);
         q.pop();
         
     }      
     
     return v;
   }
};