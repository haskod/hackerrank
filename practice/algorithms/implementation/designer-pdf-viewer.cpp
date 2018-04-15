#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[26];
  for (int i = 0; i < 26; i++) cin >> a[i];

  string s;
  cin >> s;

  int max = 0;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    int c = ((int) s[i]) - 97;
    if (a[c] > max) max = a[c];
  }

  int res = n * max;
  printf("%d\n", res);

  return 0;
}
