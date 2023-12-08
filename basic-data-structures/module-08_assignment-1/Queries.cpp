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
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

void insert_at_head(Node *&head, int v)
{
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;
}

void delete_from_position(Node *&head, int pos)
{
  if (head == NULL)
    return;

  Node *tmp = head;

  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
    if (tmp == NULL)
      return;
  }

  if (tmp->next == NULL)
    return;

  Node *deleteNode = tmp->next;
  tmp->next = tmp->next->next;
  delete deleteNode;
}

void delete_head(Node *&head)
{
  if (head == NULL)
    return;

  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;
}

int main()
{
  Node *head = NULL;

  int Q;
  cin >> Q;

  while (Q--)
  {
    int X, V;
    cin >> X >> V;

    if (X == 0)
      insert_at_head(head, V);
    else if (X == 1)
      insert_at_tail(head, V);
    else if (X == 2)
    {
      if (V == 0)
        delete_head(head);
      else
        delete_from_position(head, V);
    }

    print_linked_list(head);
  }

  return 0;
}