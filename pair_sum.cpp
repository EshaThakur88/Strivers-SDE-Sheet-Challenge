#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> result;
   for(int i=0; i<arr.size(); i++){
      for(int j=i+1; j<arr.size(); j++){
         if(s-arr[i]==arr[j]){
            result.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])});
         }
      }
   }

   sort(result.begin(), result.end());
   return result;
}

int main(int argc, char const *argv[])
{
    vector<int> arr={1,2,3,4,5};
    vector<vector<int>> result= pairSum(arr, 5);

    for(auto &row: result){
        for(auto &j:row){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
