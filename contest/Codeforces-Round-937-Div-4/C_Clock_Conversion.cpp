#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    int hour, minute;
    char colon;
    cin >> hour >> colon >> minute;

    // cout << hour << " " << minute << endl;

    // string shift = " AM\n";

    // if (hour > 11)
    //   shift = " PM\n";

    // if (hour == 0 || hour == 12)
    //   cout << 12 << ":" << minute << shift;
    // else
    // {
    //   if (hour % 12 < 10)
    //     cout << 0 << hour % 12 << ":" << minute << shift;
    //   else
    //     cout << hour % 12 << ":" << minute << shift;
    // }

    if (hour == 0)
      printf("12:%02d AM\n", minute);
    else if (hour == 12 && minute == 0)
      printf("12:00 PM\n");
    else if (hour == 12 && minute > 0)
      printf("12:%02d PM\n", minute);
    else
    {
      if (hour > 12)
        printf("%02d:%02d PM\n", (hour - 12), minute);
      else
        printf("%02d:%02d AM\n", hour, minute);
    }
  }

  return 0;
}