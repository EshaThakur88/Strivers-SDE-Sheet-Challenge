#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    
    int n=arr.size();
    int cur;
    int k=0;
    for(int i=0;i<n;i++)
    {
        cur=arr[i];
        if(cur==x)
        k++;
        for(int j=i+1;j<n;j++)
        {
           
            cur=cur^arr[j];
            
            if(cur==x)
             { 
                 k++;
              
             }
           
        }
    }
    return k;
}

int main(){
    vector<int> arr={5,3,8,3,10};
    int res= subarraysXor(arr, 8);
    cout<<res<<endl;
}