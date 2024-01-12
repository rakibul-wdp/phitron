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
    int max_count = 0;
    string max_count_word;

    while (ss >> word)
    {
      mp[word]++;
      if (mp[word] > max_count)
      {
        max_count = mp[word];
        max_count_word = word;
      }
    }

    cout << max_count_word << " " << max_count << endl;
  }

  return 0;
}