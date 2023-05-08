class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    for(auto x :indices){
        for(int i= 0;i<n;i++){
            matrix[x[0]][i]++; 
        }
        for(int j=0;j<m;j++){
            matrix[j][x[1]]++; 
        }
    }    
    int count = 0 ; 
    for(auto x :matrix){
        for (auto y:x){
         
            if(y%2==1)count++; 
        }
    }
    
    return count; 
    
    }
};