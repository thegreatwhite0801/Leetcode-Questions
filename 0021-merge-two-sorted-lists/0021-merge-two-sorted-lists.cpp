
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 =list1 ; 
        ListNode* head2 = list2 ; 
        bool flag = true ; 
        if(head1== NULL){
            return head2 ;
             }
        if(head2 == NULL){
            return head1 ;
        }
        
        
        while(flag==true){
           if(head1->next == NULL){
               head1->next =head2; 
           break ; 
           } 
          head1 = head1->next ;  
        }
    
    ListNode* head3 = list1 ; 
    
ListNode* front ; 
ListNode*back = head3 ; 
        
        front = back->next ; 
        while (back->next!=NULL){
            
            if(back->val > front->val){
                int temp = back->val ; 
                back->val = front->val ; 
                front->val  =temp ; 
                
                
            }
            if(front->next==NULL){
                back = back->next; 
                front=back->next ; 
               }
             else{
                 
                 front = front->next ;
                 
             }       
             
            }
  return head3 ;   
    }
};