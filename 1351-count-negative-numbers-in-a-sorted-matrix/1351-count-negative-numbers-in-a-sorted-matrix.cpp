class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
     int row = 0 ; 
    
        int column = grid[0].size()-1 ; 
        int count = 0 ; 
        while(row<grid.size()){
            if(column>=0 && grid[row][column]<0 ){
                count++; 
                column--; 
            }
            else{
                row+=1;
                column=grid[0].size()-1; 
            }
        
        
        
        }
    return count ; 
    
    
    }
};