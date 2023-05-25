class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int> map1 ;
        for(auto x :nums){
            map1[x]++;
        }
    
    priority_queue<pair<int,int> >pq; 
        
        for(auto it : map1){ 
    pq.push(make_pair(it.second,it.first)); 
    
    
    }
  vector<int>ans; 
        while(k--){
        pair<int,int>top1 = pq.top(); 
        ans.push_back(top1.second); 
            pq.pop(); 
    }
    return ans ;
    
    
    
    }
};