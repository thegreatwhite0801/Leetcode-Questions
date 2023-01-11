class Solution {
public:
    string replaceDigits(string s) {
        string final =""; 
        char k ;
        
        for(int i =0; i<s.length();i++){
            if(i%2==0){int x = s[i] ;
                      
                       if(i!=s.length()-1){
                            string temp = ""; 
                           temp+=s[i+1]; 
                       int y = stoi(temp); 
                       
                        k = (char)x+y;}
                       final+=s[i];
                       if(i!=s.length()-1){ final+=k ;  }}
           
            
        }
    return final ; 
    }
};