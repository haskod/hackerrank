#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int c = 1;
  int n = s.size();
  for (int i = 0; i < n; i++)
    if (((int) s[i]) < 92) c++;

  printf("%d\n", c);

  return 0;
}
