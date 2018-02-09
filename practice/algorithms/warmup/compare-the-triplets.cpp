#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[3];
  for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
  
  int b[3];
  for (int i = 0; i < 3; i++) scanf("%d", &b[i]);
  
  int ap = 0, bp = 0;
  for (int i = 0; i < 3; i++) {
    if (a[i] > b[i]) ap++;
    if (a[i] < b[i]) bp++;
  }
  
  printf("%d %d\n", ap, bp);
  
  return 0;
}

