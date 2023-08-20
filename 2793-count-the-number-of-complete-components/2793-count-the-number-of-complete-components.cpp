class Solution {
public:
    
    void checker(vector<vector<int>>&edges,vector<int>&visited,int i , int&edge,int&nodes){
if(visited[i]==1)return; 
visited[i]=1; 

edge+=edges[i].size(); 
nodes++ ;

for(auto x : edges[i]){ 
checker(edges,visited,x,edge,nodes);
}
    return ;}
    
    
    
    
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
       vector<vector<int>>adj(n,vector<int>());
    for(auto x : edges){
        adj[x[0]].push_back(x[1]); 
        adj[x[1]].push_back(x[0]); 
    }
  vector<int>visited(n,0);
int count = 0;  
for(int i = 0; i<n;i++){
    if(visited[i]==0){
      
      int edge= 0 , nodes = 0 ;
      checker(adj,visited,i ,edge,nodes);
   if((float(nodes)*(nodes-1))==edge)count++; 

    }
}
    
    return count;
    
    }
};