#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int m = 5;
  int sum = 0;
  while (n--) {
    int d = m / 2;
    m = d * 3;
    sum += d;
  }

  printf("%d\n", sum);

  return 0;
}
