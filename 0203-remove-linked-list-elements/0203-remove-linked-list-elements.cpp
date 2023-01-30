class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      
        if(head==NULL){
                return head ;
            }    

    while(head!=NULL && head->val==val){
         head=head->next ;
    }
       if(head==NULL){
                return head ;
            } 
        
        
        ListNode* current = head ; 
    while(current->next !=NULL && current != NULL){
        if(current->next->val ==val){
              current->next= current->next->next; 
            
         }
        else {
            current = current->next ; 
        }
        
        
    }
    
    return head ; 
    }
};