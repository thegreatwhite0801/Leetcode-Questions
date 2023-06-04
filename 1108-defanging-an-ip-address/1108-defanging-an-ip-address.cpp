class Solution {
public:
    string defangIPaddr(string address) {
       string final =""; 
      for(auto x : address){
          if(x=='.'){
              final+='['; 
              final+='.'; 
              final+=']'; 
                  
          }
          else{
              final+=x; 
          }
      }
    
    return final ; 
    
    }
};