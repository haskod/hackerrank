#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  scanf("%d", &q);

  while (q--) {
    int p[3];
    for (int i = 0; i < 3; i++) scanf("%d", &p[i]);

    int q[2];
    for (int i = 0; i < 2; i++)
      q[i] = abs(p[i] - p[2]);

    if (q[0] == q[1])
      printf("Mouse C");
    else if (q[0] < q[1])
      printf("Cat A");
    else
      printf("Cat B");

    printf("\n");
  }

  return 0;
}
