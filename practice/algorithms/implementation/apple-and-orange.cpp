#include <bits/stdc++.h>
using namespace std;

int main() {
  int s, t;
  scanf("%d%d", &s, &t);

  int a, b;
  scanf("%d%d", &a, &b);

  int m, n;
  scanf("%d%d", &m, &n);

  int p = 0;
  while (m--) {
    int x;
    scanf("%d", &x);

    int y = a + x;
    if (s <= y && y <= t) p++;
  }

  int q = 0;
  while (n--) {
    int x;
    scanf("%d", &x);

    int y = b + x;
    if (s <= y && y <= t) q++;
  }

  printf("%d\n%d\n", p, q);

  return 0;
}
