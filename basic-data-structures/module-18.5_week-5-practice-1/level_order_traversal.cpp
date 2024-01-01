#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> v;

void level_order(BinaryTreeNode<int> *root)
{
  if (root == NULL)
    return;
  queue<BinaryTreeNode<int> *> q;
  q.push(root);

  while (!q.empty())
  {
    // 1. bring out
    BinaryTreeNode<int> *f = q.front();
    q.pop();

    // 2. all of works
    v.push_back(f->val);

    // 3. to keep her children
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
  //  Write your code here.
  v.clear();
  level_order(root);
  return v;
}