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

int main()
{
  Node *root = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);
  Node *e = new Node(60);
  Node *f = new Node(70);

  // connection
  root->left = a;
  root->right = b;
  a->left = c;
  a->right = d;
  b->left = f;
  b->right = e;

  // call
  level_order(root);

  return 0;
}