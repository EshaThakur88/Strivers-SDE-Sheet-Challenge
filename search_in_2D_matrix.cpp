#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row=mat.size();
        int col=mat[0].size();

        int low=0, high=(row*col) - 1;

        while(low<=high){
           int mid=(low+(high-low)/2);

            if(mat[mid/col][mid%col]==target) 
                return true;
            else if (mat[mid / col][mid % col] < target) low = mid + 1;
            else high = mid - 1;

        }

        return false;
}

int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9, 10, 11, 12},{12, 14, 15, 16}};
    bool ans=searchMatrix(matrix,8);

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}