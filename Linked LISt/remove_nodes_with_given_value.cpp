class Solution {
public:
     ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;

        while(head!=nullptr && head->val==val){     // imp for 1->1->1->->2->null
            head = head->next;
        }

        ListNode* curr = head;
        while(curr!=nullptr  && curr->next!=nullptr){
            if(curr->next->val==val){
                curr->next = curr->next->next;
            }
            else
                curr = curr->next;
        }
        return head;
    }
};
