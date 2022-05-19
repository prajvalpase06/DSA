#include<bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *prev = NULL, *ne;
        while(curr){
            ne = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = ne;
        }
        return prev;
    }
};

void reverse(ListNode** head)
{
    if (!head)
        return;
    reverseUtil(*head, NULL, head);
}

void reverseUtil(ListNode* curr, ListNode* prev, ListNode** head)
{
    if (!curr->next) {
        *head = curr;
        curr->next = prev;
        return;
    }
    ListNode* next = curr->next;
    curr->next = prev;
    reverseUtil(next, curr, head);
}