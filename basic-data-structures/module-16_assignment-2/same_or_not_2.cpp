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

class myStack
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;

    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    tail = tail->next;
  }
  void pop()
  {
    sz--;

    Node *deleteNode = tail;
    tail = tail->prev;
    if (tail == NULL)
      head = NULL;
    else
      tail->next = NULL;

    delete deleteNode;
  }
  int top()
  {
    return tail->val;
  }
  int size()
  {
    return sz;
  }
  bool empty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};

class myQueue
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;

    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
  }

  void pop()
  {
    sz--;

    Node *deleteNode = head;
    head = head->next;
    if (head == NULL)
    {
      tail = NULL;
      delete deleteNode;
      return;
    }

    head->prev = NULL;
    delete deleteNode;
  }

  int front()
  {
    return head->val;
  }

  int size()
  {
    return sz;
  }

  bool empty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};

int main()
{
  myStack A;
  myQueue B;

  int N, M;
  cin >> N >> M;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    A.push(x);
  }
  for (int i = 0; i < M; i++)
  {
    int x;
    cin >> x;
    B.push(x);
  }

  if (N == M)
  {
    bool flag = true;
    while (!A.empty() && !B.empty())
    {
      if (A.top() != B.front())
        flag = false;

      A.pop();
      B.pop();
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  else
    cout << "NO" << endl;

  return 0;
}