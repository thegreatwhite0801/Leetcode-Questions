class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      vector<vector<int>>final ; 
    unordered_map<int,int>map1; 
        int max = INT_MIN; 
        for(auto x: nums){
            map1[x]++ ; 
            if(max<map1[x]){
                max = map1[x];
            }
        }
       for(int i = 0 ;i<max;i++){
           vector<int>temp ; 
           for(auto it:map1){
               if(it.second!=0){
               temp.push_back(it.first); 
               map1[it.first]--;
               
               }
             
           }
       final.push_back(temp);  
       }
      return final ;   
        
    }
};