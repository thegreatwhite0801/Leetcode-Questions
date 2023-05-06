class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0 ; 
        for(auto x : words){
            bool flag = true ;
            if(pref.length()<=x.length()){
            for(int i =0;i<pref.length();i++){
                if(x[i]!=pref[i])flag= false; 
          
            }
        if(flag)count++; 
            }
        
        }
    return count ;
    }
};