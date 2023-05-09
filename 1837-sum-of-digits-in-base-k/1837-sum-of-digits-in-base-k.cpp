class Solution {
public:
    int sumBase(int n, int k) {
        if(k==10){
            string s =""; 
            s=to_string(n); 
        int sum =0 ; 
        for(auto x :s ){
        string temp=""; 
            temp+=x; 
            sum+=stoi(temp); 
    }
         return sum  ; 
        }
       int quotient =n/k;
        int rem= n%k; 
string  s =""; 
       s+=to_string(rem); 
        while(quotient!=0){
           rem=quotient%k; 
           quotient = quotient/k; 
           s+=to_string(rem);
            
        }
    int sum =0 ; 
        for(auto x :s ){
        string temp=""; 
            temp+=x; 
            sum+=stoi(temp); 
    }
            
        
    return sum  ; 
    
    
    
    }
};