class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>map1 ;
       int row= mat.size();
        int column = mat[0].size(); 
        vector<vector<int>>ans(row,vector<int>(column,0)); 
       
        
        for(int i= 0 ; i<row ; i++){
            for(int j =0;j<column;j++){
            map1[i-j].push_back(mat[i][j]); 
                
            }
        }
    
    
    for(auto it:map1){
      vector<int>temp = it.second; 
        
        sort(temp.begin(),temp.end(),greater<int>()); 
        map1[it.first]=temp; 
    }
    for(int i= 0 ; i<row ; i++){
            for(int j =0;j<column;j++){
           ans[i][j]=map1[i-j].back(); 
           map1[i-j].pop_back(); 
            }
        }
    return ans ; 
    }
};