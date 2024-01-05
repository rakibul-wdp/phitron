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

void level_order(Node *root, int x)
{
  queue<pair<Node *, int>> q;
  q.push({root, 0});
  int invalid_level;
  while (!q.empty())
  {
    pair<Node *, int> pr = q.front();
    Node *node = pr.first;
    int level = pr.second;
    q.pop();

    if (level == x)
      cout << node->val << " ";
    invalid_level = level;

    if (node->left)
      q.push({node->left, level + 1});
    if (node->right)
      q.push({node->right, level + 1});
  }
  if (invalid_level < x)
    cout << "Invalid" << endl;
}

int main()
{
  Node *root = input_tree();
  int x;
  cin >> x;

  level_order(root, x);

  return 0;
}