#include <bits/stdc++.h>
using namespace std;

int search(int *arr, int n, int key) {
    int low = 0;    int high = n-1;

   while(low<=high){
       int mid = low+(high-low)/2;        
       if(arr[mid] == key)        
       return mid;        
       //left subarray sort    
       if(arr[low]<=arr[mid]){
           if(key>=arr[low] && key<=arr[mid])        
                high = mid-1;        
           else        
                low=mid+1;}     
                //right subarray sort    
        else {      
            if (key > arr[mid] && key <= arr[high])        
                low = mid + 1;      
            else        
                high = mid - 1;    
            }   
        }    
        return -1;

}

int main(){
    int arr[]={100, -2, 6, 10, 11};
    int result=search(arr,5,6);
    cout<<"index: "<<result<<endl;
    return 0;
}