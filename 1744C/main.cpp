// https://codeforces.com/problemset/problem/1744/C
// Name: Traffic Light

#include <bits/stdc++.h>

using namespace std;

int solve(int n, char c, string &s)
{
  if (c == 'g')
    return 0;

  int fg = -1;
  int cc = -1;
  int maxD = 0;
  for (int i = 0; i < n; i++)
  {
    if (cc == -1 && s[i] == c)
      cc = i;

    if (s[i] == 'g')
    {
      if (fg == -1)
        fg = i;

      if (cc != -1)
      {
        maxD = max(maxD, i - cc);
        cc = -1;
      }
    }
  }

  if (cc != -1)
    maxD = max(maxD, n - cc + fg);

  return maxD;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    cout << solve(n, c, s) << endl;
  }

  return 0;
}