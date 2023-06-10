class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st; 
        vector<int>ans=prices; 
        for(int i = 0 ;i<prices.size();i++){
            if(st.empty()){
             st.push(i); 
           
            }
            else{
                while(prices[st.top()]>=prices[i]){
                 
                    ans[st.top()]=prices[st.top()]-prices[i]; 
                    st.pop(); 
                if(st.empty())break;
                }
            st.push(i); 
                
            }
         
        
        }
        
    return ans; 
    
    }
};