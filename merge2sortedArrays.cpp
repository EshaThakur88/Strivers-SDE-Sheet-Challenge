#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
	vector<int> result;
	for(int i=0; i<m; i++){
		result.push_back(arr1[i]);
	}
	for(int i=0; i<n; i++){
		result.push_back(arr2[i]);
	}

	sort(result.begin(), result.end());

	return result;
}

int main(){
    vector<int> arr1={3,6,9};
    vector<int> arr2={4,10};
    
    vector<int> res=ninjaAndSortedArrays(arr1,arr2,3,2);
    
    for(auto &i: res){
        cout<<i<<" ";
    }
    
    return 0;
}