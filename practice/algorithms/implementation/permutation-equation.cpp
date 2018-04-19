#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  n++;
  int p[n], q[n];
  for (int i = 1; i < n; i++) {
    int x;
    scanf("%d", &x);

    p[i] = x;
    q[x] = i;
  }

  for (int i = 1; i < n; i++) {
    int x = q[i];
    int y = q[x];

    printf("%d\n", y);
  }

  return 0;
}
