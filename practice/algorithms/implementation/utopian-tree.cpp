#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    int h = 1;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1)
        h *= 2;
      else
        h++;
    }

    printf("%d\n", h);
  }

  return 0;
}
