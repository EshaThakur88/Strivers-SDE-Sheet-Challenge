#include <bits/stdc++.h>

using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n) {
    unordered_set<int> vis;
    int missing = 0;
    int repeated = 0;

    for (int &num : arr) {
        if (vis.count(num)) {
            repeated = num;
        } else {
            vis.insert(num);
        }
    }

    for (int num = 1; num <= n; num++) {
        if (vis.count(num) == 0) {
            missing = num;
            break;
        }
    }

    return { missing, repeated };
}

int main(){
    vector<int> arr={6,3,4,5,5,1};
    pair<int,int> ans=missingAndRepeating(arr,6);

    cout<<ans.first<<" "<<ans.second<<endl;

    return 0;

}
