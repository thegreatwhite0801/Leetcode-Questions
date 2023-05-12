class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int>positive ; 
        vector<int>negative; 
    for(auto x :nums){
        if(x>=0)positive.push_back(x); 
        else{negative.push_back(x); 
            }
    }
    vector<int>final ; 
    for(int i = 0 ; i<positive.size();i++){
       
           final.push_back(positive[i]); 
           
           final.push_back(negative[i]); 
                     
        
    
    }
    
    return final ; 
    }
};