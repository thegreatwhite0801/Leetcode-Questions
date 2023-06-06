class Solution {
public:
    string removeTrailingZeros(string num) {
       int index=INT_MIN ; 
        for(int i = num.size()-1;i>=0;i--){
           if(num[i]=='0'){
               index=i ; 
           }
            else{
                break ;
            }
        
        
        }
      if(index!=INT_MIN) num.erase(index); 
      return num ;         
    }
};