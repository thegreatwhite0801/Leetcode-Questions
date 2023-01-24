class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ;
        int columns=matrix[0].size() ; 
        bool flag= false ; 
 int i = 0 ; 
        while(flag==false){
      if(target==matrix[i][columns-1]){
          return true;
      }  
      else if(target<matrix[i][columns-1]){
          flag =true ; 
      break ; 
      }  
      i+=1 ;
      if(i==rows){
          return false ;
          break ; 
      }
    }
    for(auto x : matrix[i]){
        if(x==target){
            return true; 
        }
    }
    return  false ; 
    }
};