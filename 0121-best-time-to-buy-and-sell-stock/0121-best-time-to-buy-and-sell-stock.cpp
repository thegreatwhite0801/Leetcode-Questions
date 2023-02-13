class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm= INT_MAX ; 
        int maxm =0 ;
        
        for(auto x :prices){
            minm =min(x,minm) ;
            maxm= max(maxm,x-minm); 
            
        }
    
    return maxm ; 
    }
};