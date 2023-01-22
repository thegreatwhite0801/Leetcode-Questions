class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>map1;
         unordered_map<char,int>map2;
       bool flag ; 
        for(char& x : ransomNote){
           map1[x]++ ; 
           
       }        
        for(char& x : magazine){
           map2[x]++ ; 
           
       } 
    
        for(char&c : ransomNote){
           auto it =map2.find(c) ;
           if(it==map2.end()){
               return false; 
           }        
        else{
            if(map1[c]<=map2[c]){
                  flag = true ; 
            }
            else{ 
            return false ; 
            }
            
            
        }
            
        }
    
    
    return true ; 
    }
};