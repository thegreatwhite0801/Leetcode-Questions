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
    int getDecimalValue(ListNode* head) {
     string s=""; 
   while(head){
      int t= head->val ; 
      string k = to_string(t); 
       s+=k;
       head=head->next;
   }
    reverse(s.begin(),s.end()); 
    int sum= 0 ;
        int pos=0;
    for(auto x:s){
        if(x=='1'){
            sum+=pow(2,pos);
        pos++; 
        }
        else{
            pos++;
        }
    
    
    }
    return sum;
    }
};