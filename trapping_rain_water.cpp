#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long lmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        long temp=max(lmax[i-1],arr[i]);
        lmax[i]=temp;
    }
        long rmax[n];
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            long temp=max(rmax[i+1],arr[i]);
            rmax[i]=temp;
        }
        long water=0;
        for(int i=1;i<n-1;i++){
            water=water+(min(lmax[i],rmax[i])-arr[i]);
        }
        return water;
}