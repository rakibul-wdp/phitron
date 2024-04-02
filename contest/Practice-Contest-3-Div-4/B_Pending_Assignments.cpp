#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int numberOfAssignments, takenTime, completedDays;
    cin >> numberOfAssignments >> takenTime >> completedDays;

    if ((numberOfAssignments * takenTime) <= (completedDays * 24 * 60))
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}