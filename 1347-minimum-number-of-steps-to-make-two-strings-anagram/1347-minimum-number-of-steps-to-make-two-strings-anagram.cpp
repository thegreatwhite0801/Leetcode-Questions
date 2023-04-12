class Solution {
public:
    int minSteps(string s, string t) {
    unordered_map<char,int>map_s; 
        unordered_map<char,int>map_t; 
        
    for(auto x : s ){
        map_s[x]++; 
    }
     for(auto x : t){
         map_t[x]++; 
     } 
    int count= 0 ;
  for(auto it : map_s){
      if(map_t.find(it.first)!=map_t.end()){
     if(map_t[it.first]>it.second)count+=it.second; 
     else if(map_t[it.first]<=it.second)count+=map_t[it.first]; 
     
      }
      
      
      else{
          count+=0 ; 
              
          }
      }
  
  int length = s.length(); 
        return length-count; 
  }     
           

        
        
};


