#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{
    priority_queue<int>p;
    unordered_map<int,  vector<int>>mp;
    int m=0;
    for(int i=0; i<jobs.size(); i++){
        m=max(m, jobs[i][0]);
        mp[jobs[i][0]].push_back(jobs[i][1]);
    }
    int ans=0;
    for(int i=m; i>0; i--){
          for (auto &q : mp[i]) {
            p.push(q);
          }
          if(p.size()==0){
              continue;
          }
          ans += p.top();
          p.pop();
    }
    return ans;
}

 



