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
int balanced(BinaryTreeNode<int>* root){
    if(root==NULL) return 0;
    int l=balanced(root->left);
    if(l==-1) return -1;
    int r=balanced(root->right);
    if(r==-1) return -1;

    if(abs(l-r)>1) return -1;
    return 1+max(l,r);
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    return (balanced(root)!=-1);
}