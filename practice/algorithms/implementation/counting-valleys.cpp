#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int g = 0;
  int sum = 0;
  bool p = false;
  for (int i = 0; i < n; i++) {
    char c = s[i];

    g += c == 'D' ? -1 : 1;

    if (g < 0 && !p) {
      p = true;
      sum++;
    }
    else if (g == 0 && p)
      p = false;
  }

  printf("%d\n", sum);

  return 0;
}
