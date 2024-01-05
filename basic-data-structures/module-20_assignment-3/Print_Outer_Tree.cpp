#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree()
{
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);

  queue<Node *> q;
  if (root)
    q.push(root);

  while (!q.empty())
  {
    // 1. bring out
    Node *p = q.front();
    q.pop();

    // 2. all of works
    int l, r;
    cin >> l >> r;
    Node *myLeft;
    Node *myRight;
    if (l == -1)
      myLeft = NULL;
    else
      myLeft = new Node(l);
    if (r == -1)
      myRight = NULL;
    else
      myRight = new Node(r);

    p->left = myLeft;
    p->right = myRight;

    // 3. to keep her children
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return root;
}

void preorder(Node *root)
{
  if (root == NULL)
    return;

  if (root->left == NULL)
    preorder(root->right);
  else
    preorder(root->left);
  cout << root->val << " ";
}

void preorder_two(Node *root)
{
  if (root == NULL)
    return;

  cout << root->val << " ";
  if (root->right == NULL)
    preorder_two(root->left);
  else
    preorder_two(root->right);
}

int main()
{
  Node *root = input_tree();

  if (root->right == NULL)
    preorder(root);
  else
  {
    preorder(root->left);
    preorder_two(root);
  };

  return 0;
}