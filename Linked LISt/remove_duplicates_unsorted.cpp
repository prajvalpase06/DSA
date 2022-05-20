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


node * removeDuplicates( node *head) {
    unordered_set<int> seen;
    node* curr = head;
    node* prev = NULL;
    while(curr){
        if(seen.find(curr->data) != seen.end()){
            prev->next = curr->next;
            delete curr;
        }
        else{
            seen.insert(curr->data);
            prev = curr;
        }
        curr=prev->next;
    }
    return head;
}