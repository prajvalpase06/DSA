#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }

} * head;


node* firstNode(node* root){
    node* fast = head;
    node* slow = head;
    int flag=0;
    while(fast and fast->next){
        if(slow == fast){ flag = 1; break; }
        slow = slow->next;
        fast = fast->next->next;
    }

    if(flag){
        // loop present
        node* s2 = head;
        while(s2 != slow){
            s2=s2->next;
            slow = slow->next;
        }

        return s2;
    }

    else {
        return NULL; // no loop exists;
    }
}