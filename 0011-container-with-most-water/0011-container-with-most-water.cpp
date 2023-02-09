class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxm =INT_MIN ; 
     int fwd = 0; 
        int back= height.size()-1; 
       while(fwd<back){
        int minm = min(height[fwd],height[back]); 
           maxm =max(maxm,minm*(back-fwd));   
            if(height[fwd]>=height[back]){
                back--; 
            }     
     else{fwd++; }
       
       }
    
    return maxm ;
    
    }
};