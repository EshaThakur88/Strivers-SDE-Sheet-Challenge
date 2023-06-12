#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& mat, int n, int m)
{
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left < right && top < bottom) {
        int temp = mat[top][left];
        
        // Move elements from left to right
        for (int col = left + 1; col <= right; col++) {
            swap(mat[top][col], temp);
        }
        top++;

        // Move elements from top to bottom
        for (int row = top; row <= bottom; row++) {
            swap(mat[row][right], temp);
        }
        right--;

        // Move elements from right to left
        for (int col = right; col >= left; col--) {
            swap(mat[bottom][col], temp);
        }
        bottom--;

        // Move elements from bottom to top
        for (int row = bottom; row >= top; row--) {
            swap(mat[row][left], temp);
        }
        left++;

        mat[top - 1][left - 1] = temp;
    }
    
    // Print the rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    rotateMatrix(matrix, 4, 4);
    
    return 0;
}
