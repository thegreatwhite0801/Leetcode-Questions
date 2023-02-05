class Solution {
public:
    bool isPalindrome(string s) {
      string m =""; 
        for(char&x:s){
        x = tolower(x); 
            if(int(x)>=48&&int(x)<=57){
            m+=tolower(x) ;}
            if(int(x)>=97&&int(x)<=122){
            m+=tolower(x) ;}
      } 
        string k ="";
k=m;  
     reverse(m.begin(),m.end());
        return m==k; 
    }
};