class Solution {
public:
   
   vector<vector<int>>final; 
    void creator(vector<vector<int>>&graph,vector<int>temp){

    if(temp[temp.size()-1]==graph.size()-1){final.push_back(temp);return;}
    if(temp.size()==graph.size())return; 
    int curr = temp[temp.size()-1]; 
    for(int i = 0 ;i<graph[curr].size();i++){
        temp.push_back(graph[curr][i]); 
       cout<<graph[curr][i]<<endl ; 
        creator(graph,temp); 
        temp.pop_back(); 
    }
    return; 
    
    
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        creator(graph,{0});
        return final ; 
    }
};