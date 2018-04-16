#include <bits/stdc++.h>
using namespace std;

int sum(int x, int n, int y) {
  if (pow(y, n) < x)
    return sum(x, n, y + 1) + sum(x - pow(y, n), n, y + 1);
  else if (pow(y, n) == x)
    return 1;
  else
    return 0;
}

int main() {
  int x, n;
  scanf("%d%d", &x, &n);

  printf("%d\n", sum(x, n, 1));

  return 0;
}
