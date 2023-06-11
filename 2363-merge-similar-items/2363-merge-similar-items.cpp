class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>ret; 
        unordered_map<int,int>map1; 
        for(auto x : items1){
            if(map1.find(x[0])==map1.end())map1[x[0]]=x[1]; 
            else map1[x[0]]+=x[1]; 

        }
        for(auto x : items2){
            if(map1.find(x[0])==map1.end())map1[x[0]]=x[1]; 
            else map1[x[0]]+=x[1]; 

        }
    for(auto it : map1){
       vector<int>temp ; 
        temp.push_back(it.first); 
        temp.push_back(it.second); 
        ret.push_back(temp);
    }
    sort(ret.begin(),ret.end());
        return ret; 
    }
};