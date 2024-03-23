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

  while (!q.empty())
  {
    // 1. bring out
    Node *f = q.front();
    q.pop();

    // all of works
    cout << f->val << " ";

    // 3. to keep her children
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
}

Node *convert(int arr[], int n, int l, int r)
{
  if (l > r)
    return NULL;

  int mid = (l + r) / 2;
  Node *root = new Node(arr[mid]);
  Node *leftRoot = convert(arr, n, l, mid - 1);
  Node *rightRoot = convert(arr, n, mid + 1, r);
  root->left = leftRoot;
  root->right = rightRoot;
  return root;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  Node *root = convert(arr, n, 0, n - 1);

  level_order(root);

  return 0;
}