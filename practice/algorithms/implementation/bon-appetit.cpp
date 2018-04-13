#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);

    if (i != k) sum += x;
  }

  int b;
  scanf("%d", &b);

  sum /= 2;
  if (sum == b)
    printf("Bon Appetit");
  else
    printf("%d", abs(sum - b));

  printf("\n");

  return 0;
}
