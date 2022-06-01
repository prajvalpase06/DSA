#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }

} * head;

class Solution
{
public:
    struct Node *reverseList(struct Node *head)
    {
        Node *prev = NULL, *curr = head, *temp;
        while (curr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    Node *addOne(Node *head)
    {
        Node *newhead = reverseList(head);

        Node *curr = newhead, *start = head;
        if (curr->data < 9)
        {
            curr->data = curr->data + 1;
            Node *hed = reverseList(newhead);
            return hed;
        }
        else
        {
            while (curr->next && curr->data == 9)
            {
                curr->data = 0;
                curr = curr->next;
            }
            curr->data = curr->data + 1;
            if (curr->data == 10)
            {
                curr->data = 0;
                Node *x = new Node(1);
                curr->next = x;
            }
            Node *hed = reverseList(newhead);
            return hed;
        }
        return head;
    }
};

