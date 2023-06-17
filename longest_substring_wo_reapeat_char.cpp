#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string input)
{
    set<char> Set;

        int max=0, start=0, end=0;

        while(start < input.size()){
            auto it = Set.find(input[start]);

            if(it == Set.end()){

                if(start-end+1 > max){ 
                    max = start-end+1;
                }

                Set.insert(input[start]);
                start++;
            }

            else{
                Set.erase(input[end]);
                end++;
            }
            
        }
        
        return max;
}

int main(){
    string input="abcabcbb";
    int res=uniqueSubstrings(input);

    cout<<res;

    return 0;
}