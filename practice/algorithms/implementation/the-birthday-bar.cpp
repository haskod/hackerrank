#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int s[n];
  for (int i = 0; i < n; i++) scanf("%d", &s[i]);

  int d, m;
  scanf("%d%d", &d, &m);

  int res = 0;
  for (int i = 0; i < n - m + 1; i++) {
    int sum = 0;
    for (int j = i; j < i + m; j++) sum += s[j];

    if (sum == d) res++;
  }

  printf("%d\n", res);

  return 0;
}
