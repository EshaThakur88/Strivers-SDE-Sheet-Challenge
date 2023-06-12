#include <bits/stdc++.h> 

using namespace std;

void sort012(int *arr, int n)
{
   //dutch national flag algorithm
   int start=0, mid=0, end=n-1;

   while(mid<=end){
      if(arr[mid]==0){
         swap(arr[mid], arr[start]);
         start++; mid++;
      }
      else if(arr[mid]==1) mid++;
      else {
         swap(arr[end], arr[mid]);
         end--;
      }
   }

   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   
   return;  
}

int main(){
    int arr[]={0,1,2,2,1,0};
    sort012(arr,sizeof(arr)/sizeof(arr[0]));

    return 0;

}