/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  int size(ListNode *head)
  {
    ListNode *tmp = head;

    int count = 0;
    while (tmp != NULL)
    {
      count++;
      tmp = tmp->next;
    }
    return count;
  }

  void delete_head(ListNode *&head)
  {
    ListNode *deleteNode = head;
    head = head->next;
    delete deleteNode;
  }

  void delete_position(ListNode *&head, int pos)
  {
    ListNode *tmp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
      tmp = tmp->next;
      if (tmp == NULL)
        return;
    }

    if (tmp->next == NULL)
      return;

    ListNode *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
  }

  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    if (head == NULL)
      return head;

    int sz = size(head);
    int pos = sz - n;

    if (pos == 0)
      delete_head(head);
    else
      delete_position(head, pos);

    return head;
  }
};