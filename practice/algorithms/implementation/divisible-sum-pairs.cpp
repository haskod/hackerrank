#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int sum = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if ((a[i] + a[j]) % k == 0) sum++;

  printf("%d\n", sum);

  return 0;
}
