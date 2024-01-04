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

void level_order(Node *root)
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
    if (f->left)
      sum += f->left->val;

    // 3. to keep her children
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
  cout << sum << endl;
}

int left_sum = 0;
int right_sum = 0;

int count(Node *root)
{
  if (root == NULL)
    return 0;

  // int sum_left = 0;
  // int sum_right = 0;

  int l = count(root->left);
  int r = count(root->right);

  // Node *tmp = root->left;
  // cout << tmp->val << endl;

  left_sum = l;
  right_sum = r;

  return l + r + root->val;
}

int main()
{
  Node *root = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);

  // connection
  root->left = a;
  root->right = b;
  a->left = c;
  a->right = d;

  // level_order(root);
  // cout << endl;
  count(root);
  cout << abs(left_sum - right_sum) << endl;

  return 0;
}