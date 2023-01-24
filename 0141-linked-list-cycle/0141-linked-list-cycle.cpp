class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* current = head; 
       unordered_map<ListNode*,int>map1;
        while(current!=NULL){
         int temp = current->val ; 
                 
          auto it = map1.find(current) ; 
        if(it==map1.end()){
            map1[current]=temp ;
        }
       else{
           return true ;
       }    
       
       current = current->next;
       }
        return false;    
           }
};