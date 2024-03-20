/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int res = false;

void preorder(BinaryTreeNode<int> *root, int x)
{
  if (root == NULL)
    return;

  if (root->data == x)
    res = true;

  preorder(root->left, x);
  preorder(root->right, x);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
  // Write your code here
  preorder(root, x);

  if (res)
    return true;
  else
    return false;
}