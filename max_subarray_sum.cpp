#include <bits/stdc++.h>

using namespace std;
 
long long maxSubarraySum(int arr[], int n)
{
    long long curr = 0;
    long long maxi = 0;

    for(int i=0; i<n; i++){
        curr=max((long long)arr[i],curr+arr[i]);
        maxi=max(curr,maxi);
    }
    return maxi;
}

int main(){
    int arr[]={1, 2, 7, -4, 3, 2, -10, 9, 1};
    long long sum= maxSubarraySum(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<sum<<endl;
    return 0;
}