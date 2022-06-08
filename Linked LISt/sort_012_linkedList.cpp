class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {

        // Add code here
        int c0,c1,c2;
        c0=c1=c2=0;
        Node* newhead = nullptr;
        Node* n = head;
        while(n){
            if(n->data == 0) c0++;
            else if (n->data == 1) c1++;
            else c2++;


            n=n->next;
        }
        Node* ptr = head;
        while(ptr){
            while(c0--) { ptr->data = 0; ptr=ptr->next; }
            while(c1--) { ptr->data = 1; ptr=ptr->next; }
            while(c2--) { ptr->data = 2; ptr=ptr->next; }
        }

        return head;
    }
};
