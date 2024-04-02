#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int numberOfSpookyDays;
    cin >> numberOfSpookyDays;

    int favoriteMeals = 0;
    if (numberOfSpookyDays % 7 == 0)
      favoriteMeals = numberOfSpookyDays / 7;
    else
    {
      favoriteMeals = numberOfSpookyDays / 7;
      if (numberOfSpookyDays % 7 >= 2)
        favoriteMeals++;
    }

    cout << favoriteMeals << "\n";
  }

  return 0;
}