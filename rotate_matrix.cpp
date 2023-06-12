#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left = 0 , right = m-1 , top  = 0 ,bottom = n-1;

    while(left < right && top < bottom ){
        int temp = mat[top][left];
        for(int col = left+1; col <= right; col++){
            int k = mat[top][col];
            mat[top][col] = temp;
            temp = k;
        }
        top++;

        for(int row = top; row <= bottom; row++){
            int k = mat[row][right];
            mat[row][right] = temp;
            temp = k;
        }
        right--;

        for(int col = right; col >= left; col--){
            int k = mat[bottom][col];
            mat[bottom][col] = temp;
            temp = k;
        }
        bottom--;

        for (int row = bottom; row >= top; row--) {
          int k = mat[row][left];
          mat[row][left] = temp;
          temp = k;
        }
        left++;

        mat[top - 1][left - 1] = temp;
    }
    
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> matrix{
        {1,2,3,4}, 
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    rotateMatrix(matrix,4,4);
    return 0;
}