class Solution {
public:
    
    int maxSubArray(vector<int>& nums) {
       
    signed int sum = 0 ; 
    signed smin = INT_MIN ; 
    for(int num: nums){ 
    sum+=num; 
    smin = max(sum,smin) ;
    if(sum<0){
        sum= 0 ; 
    }
    
    
    
    }
return smin ; 
    
    } } ;