class Solution {
public:
    bool isPalindrome(string s) {
      string pal =""; 
        for(auto x :s ){
           if(int(x)>=65&&int(x)<=90){
             
              
               pal+= tolower(x);  
           }
            else if(int(x)>=97&&int(x)<=122){
                pal += x; 
            }
            else if(isdigit(x)){
                pal+=x; 
            }     
        } 

    string temp = pal ; 
reverse(pal.begin(),pal.end());
        return temp==pal;
    
    
    }
};