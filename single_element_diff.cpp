int singleNonDuplicate(vector<int>& arr)
{	
	// int n=arr.size();
// 	if(n==1) return arr[n-1];
// 	int cnt=0;
// 	for(int i=0;i<(n<<2)-1;i++){
//           if (arr[i % n] != arr[(i + 1) % n]) {
//             cnt-=1;
//             if (cnt < 0)
//               return arr[i % n];
//           } 
// 		  else
//             cnt+=1;
//     }
	int low=0;
    int high=arr.size()-2;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==arr[mid^1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return arr[low];
}