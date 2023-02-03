class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map1; 
        for(auto x :strs){
          string t = x; 
          sort(t.begin(),t.end()); 
          map1[t].push_back(x) ;  
            }
    
    vector<vector<string>>ans; 
        for(auto x: map1){
            ans.push_back(x.second); 
        }
    return ans ;
    
    }
};