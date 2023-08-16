class Solution {
public:
   int count = 0 ; 
   int zeroes= 0 ;
   void creator(vector<vector<int>>&grid,int row,int col,int length){
   if(row<0||col<0||row>=grid.size()||col>=grid[0].size()||grid[row][col]==3||grid[row][col]==-1)return; 
   if(grid[row][col]==2&&zeroes==length){count++;cout<<"here"<<endl;return;}
//    cout<<row<<" "<<col<<endl; 
   int org = grid[row][col]; 
   grid[row][col]=3; 
   creator(grid,row+1,col,length+1);
   creator(grid,row-1,col,length+1);
   creator(grid,row,col+1,length+1);
   creator(grid,row,col-1,length+1);
  grid[row][col]=org; 
    return ;

   }
   
   
   
   
    int uniquePathsIII(vector<vector<int>>& grid) {
    int row = 0 ; 
    int col = 0 ; 
    int free =0 ; 

    for(int i = 0 ; i<grid.size();i++){
        for(int j =0 ;j<grid[0].size();j++){
            if(grid[i][j]==1){
                
               row = i ; 
               col = j ; 
            free++;
               
            }
            else if(grid[i][j]==0||grid[i][j]==2)free++; 

            
        
        }
    }
    zeroes=free;
    creator(grid,row,col,1);
    return count ; 
    }
};