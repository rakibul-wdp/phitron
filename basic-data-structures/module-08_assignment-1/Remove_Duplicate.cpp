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

void insert_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
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

void remove_duplicates(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    Node *tmp2 = tmp;
    while (tmp2->next != NULL)
    {
      if (tmp2->next->val == tmp->val)
      {
        Node *duplicate = tmp2->next;
        tmp2->next = tmp2->next->next;
        delete duplicate;
      }
      else
        tmp2 = tmp2->next;
    }
    tmp = tmp->next;
  }
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
      break;
    insert_tail(head, tail, val);
  }

  remove_duplicates(head);

  print_linked_list(head);

  return 0;
}