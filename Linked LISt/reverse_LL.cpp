#include <bits/stdc++.h>
using namespace std;

struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;


node* reverse(node* head){
    node *Curr = head, *prev = NULL, *n;

    while(Curr){
        n = Curr->next;
        Curr->next = prev;

        prev = Curr;
        Curr = n;
    }
    return prev;
}