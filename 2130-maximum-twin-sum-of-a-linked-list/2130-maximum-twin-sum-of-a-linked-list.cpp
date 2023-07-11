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
    int pairSum(ListNode* head) {
       vector<int>temp; 
        while(head!=NULL){
           temp.push_back(head->val); 
            head=head->next; 
       } 
 unordered_map<int,int>map1; 
        int n =temp.size(); 
        for(int i = 0 ; i<temp.size();i++){
        int twin = temp[n-1-i]; 
        map1[twin+temp[i]]++ ; 
    }
        
        int maxm =INT_MIN ; 
        for(auto it : map1){ 
        if(it.second>1)maxm =max(maxm,it.first); 
        
        }
    return maxm  ;
    
    
    }
};