#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  
  int a = 0, b = 0, m = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      scanf("%d", &x);
      
      if (i == j) a += x;
      if (j == m) {
        b += x;
        m--;
      }
    }
  }
  
  int result = abs(a - b);
  printf("%d\n", result);
  
  return 0;
}
