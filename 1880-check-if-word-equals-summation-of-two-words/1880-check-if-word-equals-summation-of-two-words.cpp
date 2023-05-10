class Solution {
public:
    
    int returner(string k ){
        string temp = ""; 
        for(auto x : k){
         int t = int(x); 
         temp+= to_string(t-97); 
        }
    
    return stoi(temp); 
    
    }
    
    
    
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    
    int f=returner(firstWord); 
    int w = returner(secondWord);
        int t=returner(targetWord); 
    
    
    return (f+w)==t;
    }
};