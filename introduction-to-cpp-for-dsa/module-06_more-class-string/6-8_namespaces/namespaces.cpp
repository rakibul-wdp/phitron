#include <bits/stdc++.h>
using namespace std;

namespace Abul
{
  int age = 24;
  void hello()
  {
    cout << "Abul namespace" << endl;
  }
}

namespace Babul
{
  int age2 = 22;
  void hello2()
  {
    cout << "Babul namespace" << endl;
  }
}

using namespace Abul;
using namespace Babul;

int main()
{
  cout << age << endl;
  cout << age2 << endl;

  return 0;
}