class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>map1; 
        
        for(auto x :num){
            string temp= ""; 
            temp+=x; 
            int t = stoi(temp); 
            map1[t]++; 
        }
        
    bool flag =true; 
        for(int i = 0 ; i <num.size();i++){
        if(map1.find(i)!=map1.end()){
           string temp = ""; 
            temp+=num[i]; 
            int t= stoi(temp); 
            if(map1[i]!=t)return false;
        }else{
           string temp = ""; 
            temp+=num[i]; 
            int t= stoi(temp); 
            if(t!=0)return false;
        }
    
        
        
        
        
        }
    
    return true ;
    }
};