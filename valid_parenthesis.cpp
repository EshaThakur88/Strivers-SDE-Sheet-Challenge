#include<bits/stdc++.h>
bool isValidParenthesis(string expression)
{
    stack<char> st;
    int n=expression.length();
    unordered_map<char, int> mp = {
      {'{', -3},
      {'(', -2},
      {'[', -1},
      {']', 1},
      {')', 2},
      {'}', 3}
    };

    for(int i=0; i<n; i++){
        if(st.empty()){
            if (mp[expression[i]] > 0) {
                return false;
                break;
                }
            else{
                st.push(expression[i]);
            }
        }
        else{
            if(mp[expression[i]]>0){
                if(mp[st.top()]+mp[expression[i]]==0){
                    st.pop();
                }
                else{
                    return false;
                }
            } 
            else {
              st.push(expression[i]);
            }
        }
    }
    if (st.empty())
      return true;
    return false;
}