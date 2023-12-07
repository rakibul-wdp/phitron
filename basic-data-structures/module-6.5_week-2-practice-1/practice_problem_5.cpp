#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, int v)
{
  Node *newNode = new Node(v);
  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
    tmp = tmp->next;

  tmp->next = newNode;
}

int main()
{
  Node *head = NULL;

  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, val);
  }

  bool flag = false;
  for (Node *i = head; i->next != NULL; i = i->next)
  {
    for (Node *j = i->next; j != NULL; j = j->next)
    {
      if (i->val < j->val)
        flag = true;
      else
        flag = false;
    }
  }

  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}