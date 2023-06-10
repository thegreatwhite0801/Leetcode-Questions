class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st ; 
        for(auto x : s ){
            if(!st.empty() && st.top()==x){
                st.pop();
            }
        else{
            st.push(x); 
        }
        
        }
    string str=""; 
        while(!st.empty()){
        str=st.top()+str;
            st.pop(); 
    }
    return str ;
    }
};