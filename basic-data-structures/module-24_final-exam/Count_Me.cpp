#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string sentence;
    cin.ignore();
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);

    map<string, int> mp;

    string max_count_word;
    int count = INT_MIN;
    while (ss >> word)
    {
      mp[word]++;
      if (mp[word] > count)
      {
        count = mp[word];
        max_count_word = word;
      }
    }

    cout << max_count_word << " " << count << endl;
  }

  return 0;
}