class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
     int count= 0 ; 
    for(auto x : patterns){
        size_t check  ; 
        check= word.find(x); 
        if(check!=string::npos){count++; }
    }
    return count ; 
    }
};