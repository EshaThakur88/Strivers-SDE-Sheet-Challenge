#include <bits/stdc++.h>

using namespace std;

long long getInversions(long long *arr, int n){
    int i,j;
    long long cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    
    
    return cnt;
}

int main(){
    long long arr[]={2, 5, 1, 3, 4};
    long long result= getInversions(arr, 5);
    cout<<result<<endl;

    return 0;
}