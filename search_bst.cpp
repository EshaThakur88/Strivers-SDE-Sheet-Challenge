#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root->data==x) return true;
    while(root!=NULL){
        if(root->data==x) return true;
        if(x<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}