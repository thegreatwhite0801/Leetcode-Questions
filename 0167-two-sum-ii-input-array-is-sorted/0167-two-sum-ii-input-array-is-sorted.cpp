class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
       int front = 0 ; 
        int back = numbers.size()-1; 
        vector<int>ans; 
        for(int i = 0 ; i<numbers.size();i++){
            
            
            if(numbers[front]+numbers[back]==target){
                ans.push_back(front+1) ;
                ans.push_back(back+1) ;
                break ; 
            } 
            if(numbers[front]+numbers[back]>target){
                 back-=1; 
            }
            if(numbers[front]+numbers[back]<target){
                front+=1; 
            }
            
            
        }
    
    
    return ans ;
    
    
    }
};