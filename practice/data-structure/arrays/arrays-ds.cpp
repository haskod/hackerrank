#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = n - 1; i > -1; i--)
    scanf("%d", &a[i]);

  for (int i = 0; i < n; i++) {
    printf("%d", a[i]);

    if (i < n - 1) printf(" ");
  }

  printf("\n");

  return 0;
}
