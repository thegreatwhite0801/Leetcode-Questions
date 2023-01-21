class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*ptr1;
        ptr1=head;
        if(ptr1==NULL){
            return head;
        }
        while(ptr1->next!=NULL){
            if(ptr1->val==ptr1->next->val){
            ptr1->next=ptr1->next->next;
            }
        else{
        ptr1=ptr1->next;
        }
        }
      
        
    return head;
    }
};