#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    if(root==NULL) return {};
    queue<BinaryTreeNode<int>* > q;
    bool flag=true;
    q.push(root);
    vector<int> ans;
    while(!q.empty()){
        int sz=q.size();
        vector<int> temp(sz);
        for(int i=0; i<sz; i++){
            BinaryTreeNode<int>* node=q.front();
            q.pop();

            if(flag) temp[i]=node->data;
            else temp[sz-1-i]=node->data;

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        flag=!flag;
        for(auto &i:temp){
            ans.push_back(i);
        }
    }
    return ans;
}
