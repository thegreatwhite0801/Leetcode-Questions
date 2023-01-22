class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>>final={{1},{1,1}} ; 
        if(numRows== 1 ){
        vector<vector<int>>temp = {{1}}; 
         return temp ;
         
     }
     else if(numRows==2){
         vector<vector<int>>temp3 = {{1},{1,1}}; 
         return temp3 ;
     } 
     else{
        int i = 2  ;
        
         while(i!=numRows){
           int pointer1 = 0 ; 
           int pointer2 = pointer1+1 ;
        vector<int> temp ; 
               temp.push_back(1) ;   
        while(pointer2<i){
          
            int temp2 = final[i-1][pointer1] +final[i-1][pointer2]   ;   
             temp.push_back(temp2) ;
           
            pointer1+=1 ;  
            pointer2=pointer1+1 ; 
        }
           temp.push_back(1) ;  
            i+=1 ; 
          
            final.push_back(temp) ; 
             
             
         }
         
         
}   
        
        return final    ;  
 
    }
};