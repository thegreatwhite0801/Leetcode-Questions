class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
    unordered_map<string,string>map1; 
        for(auto x :paths){
         map1[x[0]]=x[1]; 
        if(map1.find(x[1])==map1.end()){
            map1[x[1]]=""; 
        }
         }   
    for(auto it:map1){
        if(it.second=="")return it.first; 
    }
    
    return ""; 
    }
};