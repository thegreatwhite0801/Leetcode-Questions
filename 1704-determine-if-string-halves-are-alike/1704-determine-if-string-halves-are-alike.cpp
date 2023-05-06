class Solution {
public:
   
    std::string toLowerCase(const std::string& str) {
    std::string result;
    result.reserve(str.length()); // optional optimization
    for (char c : str) {
        result += std::tolower(c);
    }
    return result;
}
    bool halvesAreAlike(string s) {
       int count1= 0; 
        int count2 =0 ;
        string k = toLowerCase(s); 
     int flag = (s.length()/2) -1; 
        for(int i = 0 ;i<s.length();i++){
            if(i<=flag){
               if(k[i]=='a'||k[i]=='e'||k[i]=='i'||k[i]=='i'||k[i]=='o'||k[i]=='u') count1++; 
            }
            else{
               if(k[i]=='a'||k[i]=='e'||k[i]=='i'||k[i]=='i'||k[i]=='o'||k[i]=='u') count2++; 
            }
        }
     return count1==count2; 
    }
};