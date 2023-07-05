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
int finder(TreeNode<int>* root, int &dia){
    if(root==nullptr) return 0;

    int l=finder(root->left,dia);
    int r=finder(root->right,dia);

    dia=max(dia,l+r);
    return 1+max(l,r);
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	int diameter=0;
    finder(root, diameter);
    return diameter;
}
