#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string name;
  int id;
  Student(string name, int id)
  {
    this->name = name;
    this->id = id;
  }
};

class cmp
{
public:
  bool operator()(Student a, Student b)
  {
    if (a.name > b.name)
      return true;
    else if (a.name < b.name)
      return false;
    else
    {
      if (a.id < b.id)
        return true;
      else
        return false;
    }
  }
};

int main()
{
  int t;
  cin >> t;

  priority_queue<Student, vector<Student>, cmp> pq;

  while (t--)
  {
    string name;
    int id;
    cin >> name >> id;
    Student obj(name, id);
    pq.push(obj);
  }

  while (!pq.empty())
  {
    cout << pq.top().name << " " << pq.top().id << endl;
    pq.pop();
  }

  return 0;
}