class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>map1 ; 
    for(auto x : strs){ 
    string temp = x ;
      sort(temp.begin(),temp.end()); 
      map1[temp].push_back(x); 
    
    
    }
    
    vector<vector<string>>final_ans; 
        for(auto it :map1){
            final_ans.push_back(it.second); 
        }
    return final_ans ; 
    }
};