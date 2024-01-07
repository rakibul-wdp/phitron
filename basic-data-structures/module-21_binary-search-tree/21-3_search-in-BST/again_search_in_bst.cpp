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

bool search(Node *root, int x)
{
  if (root == NULL)
    return false;

  if (root->val == x)
    return true;

  if (x < root->val)
    return search(root->left, x);
  else
    return search(root->right, x);
}

int main()
{
  Node *root = input_tree();

  if (search(root, 7))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}