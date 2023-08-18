class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    vector<vector<int>>indeg(n,vector<int>());
    for(auto it:edges){
    indeg[it[1]].push_back(it[0]); 
    }
    vector<int>final; 
    for(int i =0 ; i<n;i++){
       if(indeg[i].size()==0)final.push_back(i);  
    }
    return final ; 
    }
};