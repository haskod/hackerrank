#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int min = 1000;
  vector<int> s;
  while (n--) {
    int x;
    scanf("%d", &x);

    if (x < min) min = x;
    s.push_back(x);
  }

  while (s.size() > 0) {
    printf("%ld\n", s.size());

    int m = 1000;
    vector<int> t;
    for (int i = 0; i < s.size(); i++) {
      int x = s[i] - min;

      if (x > 0) {
        t.push_back(x);
        if (x < m) m = x;
      }
    }

    s = t;
    min = m;
  }

  return 0;
}
