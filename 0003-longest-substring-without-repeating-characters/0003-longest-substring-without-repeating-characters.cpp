class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map1; 
        if(s.size()==0)return 0 ; 
        int maxl = INT_MIN ;
        int count = 0 ;
        for(int i = 0 ; i<s.length();i++){
            if(map1.find(s[i])==map1.end()){
            map1[s[i]]=i;
            int curr=map1.size();
            maxl=max(maxl,curr); 
            }
            else{ 
            vector<char>erased; 
                for(auto it :map1){
                if(it.second<=map1[s[i]])erased.push_back(it.first);
            }
           for(auto x: erased){
               map1.erase(x);
           }
            map1[s[i]]=i ; 
            int curr=map1.size(); 
            
                maxl=max(maxl,curr); 
            
            }
        }
    int curr = map1.size(); 
        if(curr!=0){
        maxl=max(maxl,curr); 
    }
    return maxl ; 
    }
};

