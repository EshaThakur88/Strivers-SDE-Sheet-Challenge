#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    if (n <= 1) {
        return intervals;
    }

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    for (int i = 1; i < n; i++) {
        if (intervals[i][0] <= ans.back()[1]) {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> intervals={{1, 4},{3,5},{6,8},{8,9},{10,12}};
    vector<vector<int>> result=mergeIntervals(intervals);
    
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[0].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
