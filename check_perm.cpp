#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    unordered_map<int, int> mp;
    unordered_map<int, int> ump;

    for(int i=0; i<str1.size(); i++){
        mp[str1[i]]++;
    }

    if(str2.size() !=  str1.size()){
        return false;
    }
    for(int i=0; i<str2.size(); i++){
        ump[str2[i]]++;
    }
    for(int i=0; i<str1.size(); i++){
        int count = mp[str1[i]];
        if(count > ump[str1[i]]){
            return false;
        }
    }
    return true;
}