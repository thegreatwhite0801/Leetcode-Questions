class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      unordered_map<string,int>rows; 
    unordered_map<string,int>columns; 
        unordered_map<string,int>boxes;
for(int i = 0 ; i<board.size();i++){
    for(int j = 0 ; j <board[0].size();j++){
        if(board[i][j]!='.'){
        string boards = ""; 
        boards+=board[i][j]; 
        string row = "element"+boards+"is in row"+to_string(i+1) ; 
        string col = "element"+boards+"is in col"+to_string(j+1) ; 
        string box =  "element"+boards+"is in box"+to_string(i/3*3+j/3);
    rows[row]++ ;
    columns[col]++ ; 
    boxes[box]++; 
        if(rows[row]>1||columns[col]>1||boxes[box]>1)return false; 
    
        }
        }
}
   return true;      
    }
};