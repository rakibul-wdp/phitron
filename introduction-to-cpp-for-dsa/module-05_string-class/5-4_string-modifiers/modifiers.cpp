#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a = "hello";
  string b = "world";

  a += b;

  // cout << a << " " << b << endl;

  string name_1 = "abul";
  string name_2 = "babul";

  name_1.append(name_2);

  // cout << name_1 << " " << name_2 << endl;

  string food_1 = "apple";
  string food_2 = "baple";

  food_1 = "apple_add";
  food_1 += "more_add";
  // food_1[5] = 'A'; // didn't work
  food_2.push_back('d');
  food_2.pop_back();
  food_2.pop_back();

  // cout << food_1 << " " << food_2 << endl;

  string car = "BMW";
  car = "tata";
  car.assign("tesla");

  // cout << car << endl;

  string language = "JavaScriptTypeScript";
  language.erase(4, 6);
  language.replace(8, 6, "None");
  language.insert(4, "Script");

  cout << language << endl;

  return 0;
}