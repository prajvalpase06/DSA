class Solution {
public:
  ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
      ListNode dummy;
      ListNode* t = &dummy;

      dummy.next = NULL;

       if(!a && !b) return nullptr;
       if(!a)  return b;
       if(!b) return a;

       while(a && b){

           if(a->val < b->val) { tail->next = new ListNode(a->val); a=a->next; }
           else if(a->val > b->val) { tail->next = new ListNode(b->val); b=b->next; }
           else { tail->next = new ListNode(a->val); a=a->next; }

           tail = tail->next;
       }

       while(a) {
           tail->next = new ListNode(a->val);
           a=a->next;
           tail = tail->next;
       }

       while(b) {
           tail->next = new ListNode(b->val);
           b=b->next;
           tail = tail->next;
       }

       return dummy.next;
   }



   //Recursive

Node* SortedMerge(Node* a, Node* b)
{
    Node* result = NULL;

    /* Base cases */
    if (a == NULL)
        return(b);
    else if (b == NULL)
        return(a);

    /* Pick either a or b, and recur */
    if (a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return(result);
}
};
