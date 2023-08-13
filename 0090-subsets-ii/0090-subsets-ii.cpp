class Solution {
public:
  
 struct vectorkey { 
    size_t operator()(const vector<int>& v) const { 
        size_t hash = 0; 
        for (auto x : v) { 
            hash ^= std::hash<int>{}(x); 
        }
        return hash; 
    }
};


  
  
  
  
  
  unordered_map<vector<int>,int,vectorkey>map1; 
  







void creator(vector<int>temp,int index,vector<int>nums){ 

if(temp.size()!=0){sort(temp.begin(),temp.end());map1[temp]++;}
for(int i = index ; i<nums.size();i++){
temp.push_back(nums[i]); 
creator(temp,i+1,nums); 
temp.pop_back();  



}
return ; 
    
}
  
  
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        creator({},0,nums); 
        vector<vector<int>>final ; 
        for(auto it : map1){ 
        final.push_back(it.first); 
        }
   final.push_back({}); 
   return final ;
   
   
   
    }
  




};