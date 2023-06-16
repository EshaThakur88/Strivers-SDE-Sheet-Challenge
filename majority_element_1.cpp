#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	
	int target=n/2;
	
    unordered_map<int, int> cnt;
    for(int i=0; i<n; i++) {
        if(++cnt[arr[i]] > target) {
            return arr[i];
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[]={2,6,2,4,2};
    int res=findMajorityElement(arr, 5);
    cout<<res<<endl;
    return 0;
}
