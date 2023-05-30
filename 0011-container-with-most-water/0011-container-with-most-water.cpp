class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxm = INT_MIN ; 
        int front= 0. ;
        int back =height.size()-1; 
        while(front<back){
           int curr = min(height[front],height[back])*(back-front); 
            maxm= max(maxm,curr); 
           if(height[front]>=height[back])back-=1; 
           else{
               front+=1; 
           } 
        }
    
    
    return maxm ; 
    }
};