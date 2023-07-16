#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

int getMaxWidth(TreeNode<int> *root)
{
    int ans=0;
    if(!root) return ans;
    queue<pair<TreeNode<int>* , int>>q;
    q.push({root,0});
    
    while(!q.empty()){
        int sz=q.size();
        ans=max(ans,sz);
        for(int i=0; i<sz; i++){
            TreeNode<int>* node=q.front().first;
            q.pop();
            int idx=q.front().second;
            if(node->left) q.push({node->left, idx*2+1});
            if(node->right) q.push({node->right, idx*2+2});
        }
    }
    return ans;
}