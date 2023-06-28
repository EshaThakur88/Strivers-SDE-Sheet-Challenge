#include<bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n) {
	int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
    } 
    return i+1;
}