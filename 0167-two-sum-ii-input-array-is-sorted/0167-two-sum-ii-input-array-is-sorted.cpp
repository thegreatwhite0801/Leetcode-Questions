class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
        vector<int>ans ;
      unordered_map<int,int>map1; 
    for(int i = 0 ; i<numbers.size();i++){
        if(map1.find(target-numbers[i])!=map1.end()){
           ans.push_back(map1[target-numbers[i]]); 
            ans.push_back(i+1); 
            
            return ans ;
        }
        else { 
        map1[numbers[i]]=i+1 ; 
        
        }
          
          
          
          
          
    }
        
        
        
        
        
        
        
        
        /* 
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
    */
    
   
        
        
        return ans ;
    
    
    }
};