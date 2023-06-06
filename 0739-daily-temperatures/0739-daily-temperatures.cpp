class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st; 
        vector<int>final(temperatures.size(),0); 
        vector<int>t =temperatures;
        for(int i = 0 ; i<t.size();i++){
       if(st.empty())st.push(make_pair(t[i],i));
       else{
          pair<int,int>top1 = st.top(); 
           if(top1.first>=t[i])st.push(make_pair(t[i],i));
           else{
              while(top1.first<t[i]){ 
               final[top1.second]=i-top1.second; 
                st.pop();
              if(!st.empty())top1=st.top(); 
              else{break ;}
              }
               st.push(make_pair(t[i],i));
           
           }
           
       }
                     
           
                     
                     
                         
        }
    
     return final ;
    }
};