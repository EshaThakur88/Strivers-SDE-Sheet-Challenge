#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    stack<pair<BinaryTreeNode<int>*, int>> st;
    st.push({root, 1});
    vector<vector<int>> ans;
    vector<int> pre, ino, post;
    if(root==NULL) return {{}};
    
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        if (it.second == 1) {
          pre.push_back(it.first->data);
          it.second++;
          st.push(it);
          if (it.first->left != NULL) st.push({it.first->left, 1});
        }
        else if(it.second==2){
            ino.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
              st.push({it.first->right, 1});
        }
        else{
            post.push_back(it.first->data);
        }
    }
    ans.push_back(ino);
    ans.push_back(pre);
    ans.push_back(post);

    return ans;
}