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
    Node *left;
    Node *right;
    if (l == -1)
      left = NULL;
    else
      left = new Node(l);
    if (r == -1)
      right = NULL;
    else
      right = new Node(r);

    p->left = left;
    p->right = right;

    // 3. to keep her children
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return root;
}

void sum_except_leaf_nodes(Node *root)
{
  if (root == NULL)
    return;
  queue<Node *> q;
  q.push(root);

  int sum = 0;
  while (!q.empty())
  {
    // 1. bring out
    Node *f = q.front();
    q.pop();

    // 2. all of works
    if (f->left != NULL && f->right != NULL)
      sum += f->val;

    // 3. to keep her children
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
  cout << sum << endl;
}

vector<int> v;
void preorder(Node *root)
{
  if (root == NULL)
    return;

  if (root->left == NULL && root->right == NULL)
    v.push_back(root->val);

  preorder(root->left);
  preorder(root->right);
}

int main()
{
  Node *root = input_tree();

  // sum_except_leaf_nodes(root);
  preorder(root);
  sort(v.begin(), v.end(), greater<int>());
  for (int element : v)
    cout << element << " ";

  return 0;
}