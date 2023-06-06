class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st ;
      
        for(auto x :tokens){
            if(isdigit(x[0])||x.size()>1){
        
                st.push(stoi(x)); 
            }
        else{
           auto x2 = st.top();st.pop(); 
        auto x1 = st.top();st.pop(); 
            switch(x[0]){
               case '+': x1+=x2;break;
               case '-': x1-=x2;break; 
               case '*': x1*=x2;break; 
            case '/': x1/=x2;break; 
                   
           } 
        st.push(x1);
        
        }
        
        }
    
    
    return st.top(); 
    }
};