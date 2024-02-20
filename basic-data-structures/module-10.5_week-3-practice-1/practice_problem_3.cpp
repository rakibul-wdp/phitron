#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  newNode->prev = tail;
  tail = tail->next;
}

void is_palindrome(Node *head, Node *tail)
{
  Node *i = head;
  Node *j = tail;

  int flag = true;
  while (i != j && i->next != j)
  {
    if (i->val != j->val)
      flag = false;
    i = i->next;
    j = j->prev;
  }
  if (i->val != j->val)
    flag = false;

  if (flag)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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

  is_palindrome(head, tail);

  return 0;
}