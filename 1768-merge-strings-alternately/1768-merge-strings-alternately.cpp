class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int maxm = max(word1.size(),word2.size());
    string final=""; 
        for(int i = 0 ;i<maxm;i++){
        if(i<word1.size()){
            final+=word1[i]; 
        }
        if(i<word2.size()){
            final+=word2[i];
        }
    }
    
    return final; 
    }
};