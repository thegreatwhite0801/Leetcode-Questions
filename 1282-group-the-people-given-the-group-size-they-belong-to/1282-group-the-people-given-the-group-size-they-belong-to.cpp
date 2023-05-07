class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>map1 ;
        for(int i =0 ;i<groupSizes.size();i++){
            map1[groupSizes[i]].push_back(i) ; 
            
        }
    vector<vector<int>>final;
    for(auto it :map1){
   
       
   while(it.second.empty()==false){
        int count=0;
        vector<int>temp;  
       for(int i= it.second.size()-1;i>=0 && count<it.first;i--){
       temp.push_back(it.second[i]);
      it.second.pop_back(); 
       count++;     
    }
    final.push_back(temp); 
    
   }
    
    }
    return final ; 
    
    }
};