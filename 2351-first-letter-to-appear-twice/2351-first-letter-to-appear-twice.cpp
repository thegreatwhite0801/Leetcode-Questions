class Solution {
public:
    char repeatedCharacter(string s) {
    unordered_map<char,int>map1; 
    for(auto x: s){
        map1[x]++;
    if(map1[x]==2)return x; 
    }    
    return 'a' ;
    }
};