#include <bits/stdc++.h>
using namespace std;

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin() , arr.end() ) ;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            int resultingSum = target - arr[i] - arr[j] ;

            int low = j + 1 ; int high = n - 1 ;

            while(low < high)
            {
                int currSum = arr[low] + arr[high] ;

                if(currSum == resultingSum)   return "Yes" ;
 
                else if(currSum < resultingSum)  low++ ;

                else high-- ;  
            }

            while(j + 1 < n && arr[j] == arr[j + 1]) j++ ;
        }

        while(i + 1 < n && arr[i] == arr[i + 1]) i++ ;
    }

    return "No" ;
}

int main(int argc, const char** argv) {
    vector<int> arr={1, 3, 3, 10, 2};
    string result=fourSum(arr,9,5);

    cout<<result<<endl;

    return 0;
}
