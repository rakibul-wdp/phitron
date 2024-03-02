#include <bits/stdc++.h>

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

class Queue
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  Queue()
  {
    // Implement the Constructor
  }

  /*----------------- Public Functions of Queue -----------------*/

  bool isEmpty()
  {
    // Implement the isEmpty() function
    if (sz == 0)
      return true;
    else
      return false;
  }

  void enqueue(int data)
  {
    // Implement the enqueue() function
    sz++;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }

    tail->next = newNode;
    tail = tail->next;
  }

  int dequeue()
  {
    // Implement the dequeue() function
    if (sz == 0)
      return -1;
    sz--;
    Node *deleteNode = head;
    int deletedValue = deleteNode->val;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
      tail = NULL;

    return deletedValue;
  }

  int front()
  {
    // Implement the front() function
    if (sz == 0)
      return -1;
    return head->val;
  }
};