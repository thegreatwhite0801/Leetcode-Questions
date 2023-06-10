class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st; 
        stack<int>temp ;
        for(auto x :nums2){
            st.push(x); 
        }
        vector<int>ans;
       temp=st; 
        for(auto x :nums1){
           int maxm =-1 ;
            while(temp.top()!=x){
                if(temp.top()>x)maxm=temp.top(); 
                temp.pop();
            }
        temp =st; 
        ans.push_back(maxm);
        
        
        }
    
    return ans ; 
    }
};