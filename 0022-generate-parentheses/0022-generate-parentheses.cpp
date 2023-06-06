class Solution {
public:
vector<string>final ; 
    void randomgenerator(int front,int back,int n,string temp){
     if(temp.size()==n*2){
         final.push_back(temp); 
         return ; 
     }
 
    if(front<n)randomgenerator(front+1,back,n,temp+"("); 
     if(back<n && back<front)randomgenerator(front,back+1,n,temp+")"); 
    }
    
    
    
    
    
    vector<string> generateParenthesis(int n) {
       randomgenerator(0,0,n,""); 
    return final ;
    }
};