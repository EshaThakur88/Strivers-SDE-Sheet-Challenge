#include <bits/stdc++.h>

using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> result(n);
  for(int i=0; i<n;i++){
    result[i].resize(i+1);

    result[i][0]=result[i][i]=1;

    for(int j=1;j<i;j++){
      result[i][j]=result[i-1][j-1]+result[i-1][j];
    }
  }

  return result;
}

int main(){
    int n=4;
    vector<vector<long long int>> res=printPascal(n);

    int row=res.size();

    for(int i=0;i<row;i++){
        for(int j=0; j<=i;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}