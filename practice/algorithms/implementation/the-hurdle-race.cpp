#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  int max = 0;
  while (n--) {
    int x;
    scanf("%d", &x);

    if (x > max) max = x;
  }

  int dose = max - k;
  printf("%d\n", dose < 0 ? 0 : dose);

  return 0;
}
