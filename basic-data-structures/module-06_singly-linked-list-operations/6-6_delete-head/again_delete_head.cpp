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
    cout << endl
         << "inserted at head" << endl
         << endl;
    return;
  }

  Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }

  // tmp is now in last node
  tmp->next = newNode;

  cout << endl
       << "inserted at tail" << endl
       << endl;
}

void print_linked_list(Node *head)
{
  cout << endl;
  cout << "your linked list: ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }

  cout << endl
       << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
  Node *newNode = new Node(v);
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
    tmp = tmp->next;

  newNode->next = tmp->next;
  tmp->next = newNode;

  cout << endl
       << endl
       << "inserted at position " << pos << endl
       << endl;
}

void insert_at_head(Node *&head, int v)
{
  Node *newNode = new Node(v);
  newNode->next = head;
  head = newNode;

  cout << endl
       << "inserted at head" << endl
       << endl;
}

void delete_from_position(Node *head, int pos)
{
  Node *tmp = head;
  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  Node *deleteNode = tmp->next;
  tmp->next = tmp->next->next;
  delete deleteNode;

  cout << endl
       << "deleted position " << pos << endl
       << endl;
}

void delete_head(Node *&head)
{
  Node *deleteNode = head;
  head = head->next;
  delete deleteNode;

  cout << endl
       << "deleted head " << endl
       << endl;
}

int main()
{
  Node *head = NULL;

  while (true)
  {
    cout << "option 1: insert at tail" << endl;
    cout << "option 2: print linked list" << endl;
    cout << "option 3: insert at any position" << endl;
    cout << "option 4: insert at head" << endl;
    cout << "option 5: delete from position" << endl;
    cout << "option 6: delete head" << endl;
    cout << "option 0: terminate" << endl;

    int op;
    cin >> op;

    if (op == 1)
    {
      cout << "please enter value: ";
      int v;
      cin >> v;
      insert_at_tail(head, v);
    }
    else if (op == 2)
      print_linked_list(head);
    else if (op == 3)
    {
      int pos, v;
      cout << "enter position: ";
      cin >> pos;
      cout << "enter value: ";
      cin >> v;
      if (pos == 0)
        insert_at_head(head, v);
      else
        insert_at_position(head, pos, v);
    }
    else if (op == 4)
    {
      int v;
      cout << "enter value: ";
      cin >> v;
      insert_at_head(head, v);
    }
    else if (op == 5)
    {
      int pos;
      cout << "enter position: ";
      cin >> pos;
      if (pos == 0)
        delete_head(head);
      else
        delete_from_position(head, pos);
    }
    else if (op == 6)
      delete_head(head);
    else if (op == 0)
      break;
  }

  return 0;
}