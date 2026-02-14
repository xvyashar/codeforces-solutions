#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int si = (int)s.size();
  int ti = (int)t.size();
  while ((si-- > 0) + (ti-- > 0) == 2)
    if (s[si] != t[ti])
      break;

  cout << si + ti + 2 << endl;

  return 0;
}