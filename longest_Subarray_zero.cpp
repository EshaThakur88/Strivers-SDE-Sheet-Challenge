#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr) {
   unordered_map<int,int> mp;

  for(int i = 1; i < arr.size(); i++){
      arr[i] += arr[i-1];
  }

  int maxi = 0;
  for(int i = 0; i < arr.size(); i++){
      if(arr[i] == 0) maxi = i+1;
      else if(mp.find(arr[i]) != mp.end()){
        maxi = max(maxi, i - mp[arr[i]]);
      }else{
        mp[arr[i]] = i;
      }
  }

  return maxi;
}

int main(){
    vector<int> arr={1, 3, -1, 4, -4};
    int ans=LongestSubsetWithZeroSum(arr);
    cout<<ans;
    return 0;
}