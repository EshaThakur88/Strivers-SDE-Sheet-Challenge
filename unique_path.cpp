#include <bits/stdc++.h> 
using namespace std;

int uniquePaths(int m, int n) {
	double ans = 1;
    for (int i = max(m, n); i <= m + n - 2; i++) ans *= i;
    for (int j = 1; j <= min(m, n) - 1; j++) ans /= j;
    return ans;
}

int main(){
    int result=uniquePaths(3,2);
    cout<<result<<endl;
    return 0;
}