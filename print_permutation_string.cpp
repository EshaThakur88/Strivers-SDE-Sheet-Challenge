#include <bits/stdc++.h> 
void solve(vector<string> &res, string &s, int i){
    if(i == s.size()-1){
        res.push_back(s);
        return;
    }

    for(int j=i; j<s.size(); j++){
        swap(s[i], s[j]);
        solve(res, s, i+1);
        swap(s[i], s[j]);
    }

}

vector<string> findPermutations(string &s) {
    vector<string> res;
    solve(res, s, 0);
    return res;
}