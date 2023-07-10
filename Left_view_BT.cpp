#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    if(root==NULL) return {};
    queue<pair<TreeNode<int>*, int>> q;
    map<int, int> mp;
    q.push({root, 1});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        TreeNode<int>* node=it.first;
        int level=it.second;
        if(mp.find(level)==mp.end()) mp[level]=node->data;
        level++;
        if(node->left)
          q.push({node->left, level});
        if(node->right)
          q.push({node->right, level});
    }
    for(auto i: mp){
        ans.push_back(i.second);
    }

    return ans;
}