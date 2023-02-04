class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map1; 
        for(auto x : nums){
            map1[x]++ ;
        }
    vector<int>ans; 
 priority_queue<pair<int,int>>q1; 
        for(auto it:map1){
            
            q1.push(make_pair(it.second,it.first)); 
            }
    
    
    while(k--){
        ans.push_back(q1.top().second); 
        q1.pop();
    }
    return ans; 
    }
};