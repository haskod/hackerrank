#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, k;
    scanf("%d%d", &n, &k);

    int m = 0;
    while (n--) {
      int x;
      scanf("%d", &x);

      if (x < 1) m++;
    }

    if (m < k)
      printf("YES");
    else
      printf("NO");

    printf("\n");
  }

  return 0;
}
