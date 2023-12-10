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
    tmp = tmp->next;
  }
  int pos = length / 2;

  tmp = head;

  for (int i = 1; i <= pos - 1; i++)
    tmp = tmp->next;

  if (pos % 2 == 0)
    cout << tmp->val << endl;
  else
    cout << tmp->val << " " << tmp->next->val << endl;
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

  print_linked_list(head);

  return 0;
}

/*

- get size of linked-list
- pos= size /2
- create loop pos -1 and then do tmp = tmp->next
- now if pos % 2 == 0 then answer is tmp->val, otherwise answer is tmp->val and tmp->next->val

*/