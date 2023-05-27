class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0 ; 
         int mid = mat.size()/2 ; 
         bool flag= false; 
        if(mat.size()%2==1){
            flag= true ;
        }
    
        for(int i = 0,j = mat.size()-1; i <mat.size();i++){
            sum+=mat[i][i];
          if(flag){
            if((j-i)!=mid){sum+=mat[i][j-i];}}
            else{
                sum+=mat[i][j-i]; 
            }
           
        }
       
    return sum ; 
    
    
    }
};