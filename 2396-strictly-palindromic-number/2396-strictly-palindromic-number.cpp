class Solution {
public:
  
     

    
    
    bool isStrictlyPalindromic(int n) {
    bool flag =true ; 
        int count = 2;
        int remainder = 0; 
        
    while(flag!=false && count<=n-2){
        int temp = count ; 
       vector<int>bin; 
        while(temp>0){
            int t = temp%2 ; 
            bin.push_back(t); 
            temp = temp/2 ; 
        }
        vector<int>check= bin; 
        for(auto x : check)cout<<x ; 
        reverse(bin.begin(),bin.end()) ; 
for(auto x : bin){cout<<" "  ; cout<<x ; }
        if(check!=bin)flag=false ;
        check.clear(); 
        bin.clear(); 
        count+=1; 
        
    }  
    return flag ; 
    }
};
