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


node* removeDuplicates(node* root){
    node* temp = head;
    while(temp and temp->next){
        if(temp->data == temp->next->data){
            node* p = temp->next;
            delete (p);
            temp->next = p->next;
        }
        // V.V.imp else
        else 
            temp=temp->next;
    }
    
    return head;
}

// /* Pick elements one by one */
    // struct Node* curr = head;
    // struct Node* prev = NULL;
    // while (curr != NULL) {
    //     // If current value is seen before
    //     if (seen.find(curr->data) != seen.end()) {
    //         prev->next = curr->next;
    //         delete (curr);
    //     }
    //     else {
    //         seen.insert(curr->data);
    //         prev = curr;
    //     }
    //     curr = prev->next;
    // }
    // return head;
    // } 