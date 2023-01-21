class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> temp ; 
    temp = nums ; 
    int temp1 ,temp2 ; 
    vector<int> tempest= {0,1} ; 
   
    vector<int> final ; 
    bool flag1=true ,flag2 =true ; 
        
    sort(nums.begin() ,nums.end());
    int frontpointer = 0 ,backpointer =nums.size()-1 ; 
    while(frontpointer<backpointer){
        if(nums[frontpointer]+nums[backpointer]<target){
            
            frontpointer+=1 ; 
        }
        else if(nums[frontpointer]+nums[backpointer]>target){
            backpointer-=1 ; 
            
        }
        else {
           
               temp1 = nums[frontpointer] ; 
               temp2 = nums[backpointer] ; 
               frontpointer += backpointer ; 
               
            
      }
        
        
        
        }
        
        
    
    for(int i = 0 ; i <temp.size();i++){
        if(temp1==temp[i]&&flag1==true){
            final.push_back(i) ; 
            flag1==false ; 
        }
        else if(temp2==temp[i]&&flag2==true){
            final.push_back(i);
        flag2=false ; 
        
        }
        
    }     
    
    
    return final ; 
    
    
    }
};