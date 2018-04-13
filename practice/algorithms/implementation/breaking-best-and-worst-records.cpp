#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int min, max;
  scanf("%d", &min);
  max = min;
  n--;

  int p = 0, q = 0;

  while (n--) {
    int x;
    scanf("%d", &x);

    if (x < min) {
      min = x; p++;
    }
    if (x > max) {
      max = x; q++;
    }
  }

  printf("%d %d\n", q, p);

  return 0;
}
