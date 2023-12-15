#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  string val;
  Node *next;
  Node *prev;
  Node(string val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insert(Node *&head, Node *&tail, string val)
{
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

Node *find(Node *head, Node *&current, string path)
{
  Node *tmp = head;

  while (tmp != NULL)
  {
    if (tmp->val == path)
    {
      current = tmp;
      cout << current->val << endl;
      return tmp;
    }
    tmp = tmp->next;
  }

  cout << "Not Available" << endl;
  return NULL;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  string addresses;
  while (true)
  {
    cin >> addresses;
    if (addresses == "end")
      break;
    insert(head, tail, addresses);
  }

  int q;
  cin >> q;

  Node *current = head;

  while (q--)
  {
    string command;
    cin >> command;

    if (command == "visit")
    {
      string path;
      cin >> path;

      find(head, current, path);
      // Node *result = find(head, path);
      // if (result != NULL)
      // {
      //   current = result;
      //   cout << current->val << endl;
      // }
      // else
      //   cout << "Not Available" << endl;
    }
    else if (command == "next")
    {
      if (current != NULL && current->next != NULL)
      {
        current = current->next;
        cout << current->val << endl;
      }
      else
        cout << "Not Available" << endl;
    }
    else if (command == "prev")
    {
      if (current != NULL && current->prev != NULL)
      {
        current = current->prev;
        cout << current->val << endl;
      }
      else
        cout << "Not Available" << endl;
    }
  }

  return 0;
}

/*

- After traversing the list in the find function, if you find the string, then save that node in temp and print that node, and return it. Otherwise print "not available".
- Then when you get the next string prev in the main function, print the prev data of temp and do tmp = tmp->prev. And do the same if you get next.

Doubly linked list create korben. Erpor input niben jotokkhn end pacchen na. Then queries input niye string input niben. String Jodi visit hoi tahole arekta string input niben then otake find name ekta function e pathaben. Ekta temp node rakhben head diye initialize kore. Erpor find function e list ke traverse kore Jodi string ta khuje pan tahole temp e oi node ta save korben ar oi node ta print kore return kore diben. Ar nahole not available print korben. Then main function e next string prev Pele temp er prv data print korben and tmp = tmp-> prev korben. ar next peleo same tai korben.

*/