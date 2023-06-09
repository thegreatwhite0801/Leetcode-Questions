class Solution {
public:
    int minimizedStringLength(string s) {
      unordered_map<char,int>map1; 
        for(auto x: s){
            map1[x]++; 
        }

    return map1.size() ;
    
    }
};