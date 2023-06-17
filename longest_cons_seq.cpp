#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
        unordered_set<int> s(arr.begin(),arr.end()); 
        int longest_sequence = 0;
        
        for(int i=0; i<n; i++)
        {
            if(s.find(arr[i] - 1)!=s.end())
                continue;
            
            else
            {
                int count = 0;
                int current_element = arr[i];
                
                while(s.find(current_element) != s.end())
                {
                    count++;
                    current_element++;
                }
                
                longest_sequence = max(longest_sequence,count);
            }
        }
        
        return longest_sequence;
}

int main(int argc, char const *argv[])
{
    vector<int> arr={33, 20, 34, 30, 35};
    int res=lengthOfLongestConsecutiveSequence(arr, 5);
    cout<<res<<endl;
    return 0;
}
