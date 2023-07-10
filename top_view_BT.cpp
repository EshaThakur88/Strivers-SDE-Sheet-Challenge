#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    vector<int> ans;
    if(root==NULL) return {};
    queue<pair<TreeNode<int>*, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        TreeNode<int>* node=it.first;
        int line= it.second;
        if(mp.find(line)==mp.end()) mp[line]=node->val;

        if(node->left) q.push({node->left, line-1});
        if(node->right) q.push({node->right, line+1});
    }
    for(auto i: mp){
        ans.push_back(i.second);
    }
    return ans;
}