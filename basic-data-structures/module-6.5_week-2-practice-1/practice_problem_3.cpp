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

void print_linked_list(Node *head)
{
  Node *tmp = head;

  int length = 0;
  while (tmp != NULL)
  {
    length++;
    if (length % 2 == 0)
    {
      int res = length / 2;
      cout <<
    }
    tmp = tmp->next;
  }
}

int main()
{
  int val;

  Node *head = NULL;

  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_at_tail(head, val);
  }

  print_linked_list(head);

  return 0;
}