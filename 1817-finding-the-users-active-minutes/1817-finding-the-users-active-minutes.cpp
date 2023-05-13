class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
 unordered_map<int,unordered_map<int,int>>map1; 
    sort(logs.begin(),logs.end());
    for(auto x : logs){
        map1[x[0]][x[1]]++; 
        
    }
    vector<int>ans(k); 
        for(auto it :map1){
            ans[it.second.size()-1]+=1;
        }
    
    return ans ;
    }
};