/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
  
       ListNode* head1 = new ListNode();  
            ListNode* curr = head1; 
        int sum=0 ;
        head= head->next; 
        while(head!=NULL){
        if(head->val==0){
            ListNode* temp = new ListNode(sum); 
            curr->next=temp ; 
            curr=temp; 
            sum=0 ; 
        head=head->next; 
        }
        else{
            sum+=head->val ; 
            head=head->next; 
            
        }
         
     }
    
    return head1->next; 
    }
};