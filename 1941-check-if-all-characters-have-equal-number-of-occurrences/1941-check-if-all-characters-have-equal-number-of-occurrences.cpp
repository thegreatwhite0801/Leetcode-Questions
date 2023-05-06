class Solution {
public:
    bool areOccurrencesEqual(string s) {
    unordered_map<char,int>map1; 
        int temp; 
        for(auto x :s){
            map1[x]++; 
        temp = map1[x];
        }
    cout<<temp;
   bool flag =true ;
        for(auto it:map1){
        
        if(temp!=it.second)flag=false; 
    }
    return flag; 
    }
};