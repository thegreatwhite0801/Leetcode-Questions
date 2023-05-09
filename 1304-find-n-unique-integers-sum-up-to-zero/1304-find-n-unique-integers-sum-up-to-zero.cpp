class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>final; 
        if(n%2==0){
         int temp = n/2 ; 
        for(int i= 1 ;i<temp+1;i++){
            final.push_back(i); 
            final.push_back(i*-1); 
        }
        }
   else{
       
   int temp = n/2 ;
      for(int i =0 ; i<temp+1;i++){
          if(i!=0){
            final.push_back(i); 
            final.push_back(i*-1); 
          }
      else{
          final.push_back(i); 
      }
      }
   
   }
    return final ; 
    
    }
};