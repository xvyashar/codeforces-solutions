// problem: https://codeforces.com/problemset/problem/4/A
// Name: Watermelon

#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;

    cout << (w > 3 && w % 2 == 0 ? "YES" : "NO") << endl;

    return 0;
}
