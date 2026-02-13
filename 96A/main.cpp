// https://codeforces.com/problemset/problem/96/A
// Name: A. Football

#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input;
  cin >> input;

  char c = '\n';
  int f = 0;
  for (size_t i = 0; i < input.size(); i++)
  {
    if (input[i] != c)
    {
      c = input[i];
      f = 1;
      continue;
    }

    if (++f >= 7)
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

  return 0;
}