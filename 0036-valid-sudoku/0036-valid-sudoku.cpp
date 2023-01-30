class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>map1 ; 
        ; 
        for(int rows = 0 ; rows<9;rows++){
            for(int column = 0 ;column<9;column++){
        if(board[rows][column]!='.'){        
        string row1 = "element "+to_string(board[rows][column]) +" found in row " + to_string(rows) ; 
        string column1 = "element "+to_string(board[rows][column]) +" found in column " + to_string(column) ; 
        string box_no = "element "+to_string(board[rows][column]) +" found in box " + to_string(rows/3) +" "+to_string(column/3) ;         
      if(map1.find(row1)!= map1.end() ||map1.find(column1)!=map1.end() || map1.find(box_no)!=map1.end()){
          
          return false ; 
          
          
           }
                
    map1[row1]++ ; 
    map1[column1]++ ; 
    map1[box_no]++ ; 
    
    
    
     
      
    
    
      }     
        
        
        
        }
                
                
                
            }
           return true ; 
            
            
            
        }
    
};