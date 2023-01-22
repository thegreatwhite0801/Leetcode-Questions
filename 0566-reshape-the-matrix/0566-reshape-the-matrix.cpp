class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size() ;
        int columns=mat[0].size(); 
        
        int pointer1 = 0 ; 
        int pointer2 = 0 ;
        vector<vector<int>> final1 ;
        vector<int>temp ; 
        if(r*c != rows*columns){
            return mat ; 
        } 
        while(pointer1<rows){
            if(pointer2<columns){
              temp.push_back(mat[pointer1][pointer2]) ; 
              pointer2+=1; 
            
            
            }
            else{ 
            pointer2= 0 ; 
            pointer1+=1 ; 
            
            
            }
            
            
        }
  
    int fritr =0 ;
    int secitr = 0 ; 
     int count= 0 ;   
vector<int>temp2 ;
    while(fritr<r){
       
        if(secitr<c){
           
           temp2.push_back(temp[count]) ;  
           
           count+=1 ; 
           secitr+=1 ; 
           
       } 
       else{
           fritr+=1 ; 
           secitr = 0 ;  
          
           final1.push_back(temp2) ;
           temp2.clear() ; 
       } 
    
    } 
    
    return final1 ; 
    }
};