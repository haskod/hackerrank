#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n - i; j++) printf(" ");
    for (int j = 0; j < i + 1; j++) printf("#");
    printf("\n");
  }
  
  return 0;
}
