#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void changeTree(BinaryTreeNode < int > * root) {
    if(!root) return;
    int childSum=0;
    if(root->left) childSum+=root->left->data;
    if(root->right) childSum+=root->right->data;

    if(childSum>=root->data){
        root->data=childSum;
    }
    else{
        if(root->left) root->left->data=root->data;
        else if(root->right) root->right->data=root->data;
    }

    changeTree(root->left);
    changeTree(root->right);

    int backSum=0;
    if(root->left) backSum+=root->left->data;
    if(root->right) backSum+=root->right->data;
    if(root->left || root->right) root->data=backSum;
}  