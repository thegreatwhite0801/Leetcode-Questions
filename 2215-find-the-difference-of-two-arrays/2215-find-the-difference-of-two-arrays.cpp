class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map1; 
        unordered_map<int,int>map2;
        vector<vector<int>>ans; 
        for(auto x :nums1){
            map1[x]++; 
        }
        vector<int>temp;  
        for(auto x :nums2){
            map2[x]++; 
    if(map1.find(x)==map1.end()&&map2[x]==1)temp.push_back(x); 
         }
         
   vector<int>temp2; 
        for(auto it:map1){ 
  
            if(map2.find(it.first)==map1.end())temp2.push_back(it.first); 
         }
        
        ans.push_back(temp2); 
        ans.push_back(temp); 
    return ans ;
    }
};