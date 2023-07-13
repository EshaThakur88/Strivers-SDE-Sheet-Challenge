#include<bits/stdc++.h>
int maximumMeetings(vector<int> &start, vector<int> &ends)
{
    int ans=1;
    int n=start.size();
    vector<int>indexes(n);
    for (int i=0;i<n;i++) indexes[i]=i;
    sort(indexes.begin(),indexes.end(),[&](int i,int j){return ends[i]<ends[j];});
    int ind=indexes[0];
    for (int i=1;i<n;i++)
    {
        int index=indexes[i];
        if (start[index]>ends[ind])
        {
            ans++;
            ind=index;
        }
    }
    return ans;
}