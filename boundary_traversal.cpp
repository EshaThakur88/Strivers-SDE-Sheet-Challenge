#include <bits/stdc++.h> 

/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isleaf(TreeNode<int>* root) {
    return (root->left == nullptr && root->right == nullptr);
}

void left_traversal(TreeNode<int>* root, vector<int> &res) {
    if (root == nullptr) {
        return;
    }
    if (!isleaf(root)) {
        res.push_back(root->data);
        if (root->left) {
            left_traversal(root->left, res);
        } else {
            left_traversal(root->right, res);
        }
    }
}

void right_traversal(TreeNode<int>* root, vector<int> &temp) {
    if (root == nullptr) {
        return;
    }
    if (!isleaf(root)) {
        temp.push_back(root->data);
        if (root->right) {
            right_traversal(root->right, temp);
        } else {
            right_traversal(root->left, temp);
        }
    }
}

void leaf(TreeNode<int> *root, vector<int> &res) {
    if (root == nullptr) {
        return;
    }
    if (isleaf(root)){
        res.push_back(root->data);
    }
    if (root->left) {
        leaf(root->left, res);
    }
    if (root->right) {
        leaf(root->right, res);
    }
}

vector<int> traverseBoundary(TreeNode<int>* root) {
    vector<int> res;
    vector<int> temp;
    if (root == nullptr) {
        return res;
    }
    if (!isleaf(root)) {
        res.push_back(root->data);
    }
    left_traversal(root->left, res);
    leaf(root, res);
    right_traversal(root->right, temp);
    for (int i = temp.size() - 1; i >= 0; --i){
        res.push_back(temp[i]);
    }
    return res;
}


// METHOD 2
// bool isleaf(TreeNode<int>* root){
//     return (root->left==NULL && root->right==NULL);
// }

// void left_traversal(TreeNode<int>* root, vector<int> &res){
//     TreeNode<int>* current = root->left;
//     while (current) {
//         if(!isleaf(current))
//             res.push_back(current->data);
//         if (current->left) {
//             current = current->left;
//         } else {
//             current = current->right;
//         }
//     }
// }

// void right_traversal(TreeNode<int>* root, vector<int> &res){
//     TreeNode<int>* current = root->right;
//     stack<int> rightBoundary; // Use a stack to reverse the order
//     while (current) {
//         if(!isleaf(current))
//             rightBoundary.push(current->data);
//         if (current->right) {
//             current = current->right;
//         } else {
//             current = current->left;
//         }
//     }
//     while (!rightBoundary.empty()) {
//         res.push_back(rightBoundary.top());
//         rightBoundary.pop();
//     }
// }

// void leaf(TreeNode<int> *root, vector<int> &res) {
//     if (isleaf(root)){
//         res.push_back(root->data);
//         return;
//     }
//     if(root->left) leaf(root->left, res);
//     if(root->right) leaf(root->right, res);
// }

// vector<int> traverseBoundary(TreeNode<int>* root){
//     vector<int> res;
//     if(!root) return res;
//     if(!isleaf(root)) res.push_back(root->data);
//     left_traversal(root, res);
//     leaf(root, res);
//     right_traversal(root, res);
//     return res;
// }
