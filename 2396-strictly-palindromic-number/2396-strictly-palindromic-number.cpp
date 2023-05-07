class Solution {
public:
    bool isStrictlyPalindromic(int n) {
       
    for(int i = 2;i<=n-2;i++){
        int temp = n ;
        string s =""; 
        while(temp>0){
        int rem =temp%i ; 
        temp=temp/i;
            s+=to_string(rem); 
        }
   string str = s; 
    reverse(s.begin(),s.end()); 
    if(str!=s)return false; 
    }
        return true ;
    }
};