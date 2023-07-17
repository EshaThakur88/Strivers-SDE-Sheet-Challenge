int longestSubSeg(vector<int> &arr , int n, int k){
    int i = 0, j = 0;
    int maxi = 0;
    int fl = 0;

    while(j < n){
        if(arr[j] == 0){
            fl++;
        }

        while(fl > k){
            if(arr[i] == 0){
                fl--;
            }
            i++;
        }
        maxi = max(maxi, j - i + 1);
        j++;
    }
    return maxi;
}