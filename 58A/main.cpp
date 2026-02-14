// https://codeforces.com/problemset/problem/58/A
// Name: Chat room

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;

  char w[6] = "hello";

  int i = 0;
  for (char &c : s)
    if (c == w[i] && i++ >= 4)
    {
      cout << "YES" << endl;
      return 0;
    }

  cout << "NO" << endl;

  return 0;
}