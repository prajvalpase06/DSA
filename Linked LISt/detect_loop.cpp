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
};



class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here

        //using hashmaps
        unordered_map<Node*, bool> visited;
        Node* t = head;
        while(t){
            if(visited[t]) return true;
            else{
                visited[t] = true;
            }
            t=t->next;
        }
        return false;


        //using fast and slow pointers

        Node* fast= head;
        Node* slow= head;

        fast = slow = head;

        while(slow and fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) return true;
            head = head->next;
        }

        return false;
    }
};