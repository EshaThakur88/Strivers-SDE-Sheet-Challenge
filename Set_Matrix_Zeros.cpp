#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int rows=matrix.size();
	int columns=matrix[0].size();

	vector<pair<int, int>> vp;
	for(int i=0; i<rows; i++){
		for(int j=0; j<columns;j++){
			if(matrix[i][j]==0){
				vp.push_back(make_pair(i,j));
			}
		}
	}

	for(int i=0; i<vp.size(); i++){
		for(int j=0;j<columns;j++){
			matrix[vp[i].first][j]=0;
		}
		
		for(int k=0;k<rows;k++){
			matrix[k][vp[i].second]=0;
		}
	}

	 for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

	return;

}

int main(){
    vector<vector<int>> matrix= {
        {1, 2, 3, 0},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    setZeros(matrix);
    return 0;
}