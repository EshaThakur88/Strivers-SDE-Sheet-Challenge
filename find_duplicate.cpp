#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	vector<int> hash_v(n,0);
	
	for (int i = 0; i < n; i++) {
        hash_v[arr[i]]++;
        if (hash_v[arr[i]] > 1) {
            return arr[i];
        }
    }
	
	return -1;
}

int main(){
    vector<int> arr={1, 3, 4, 2, 2};
    cout<<findDuplicate(arr,5);
    return 0;
}