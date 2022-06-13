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

class Solution {
  public:

    int ans = 0;

    int height(Node * r)
    {
        if(!r)
        {
            return 0;
        }

        int ll = height(r->left);
        int rr = height(r->right);

        ans = max(ans, 1 + ll + rr);

        return 1 + max(ll , rr);
    }

    int diameter(Node* root) {
        int a = height(root);

        return ans-1;
    }
};
