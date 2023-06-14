#include <bits/stdc++.h>

using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    int floor=n/3;
    vector<int> res;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] > floor) {
          res.push_back(arr[i]);
          mp[arr[i]] = INT_MIN;
        }
    }

    return res;

}

int main(){
    vector<int> arr={7, 4, 4, 9, 7};
    vector<int> ans=majorityElementII(arr);

    for(auto &i: ans){
        cout<<i<<" ";
    }

    return 0;
}