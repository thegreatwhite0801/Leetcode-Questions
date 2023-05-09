class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto x : words){
            string temp = x; 
            reverse(x.begin(),x.end());
            if(x==temp)return temp ;
        }
    return ""; 
    }
};