#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  
  int a[100] = {0};
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    
    a[x]++;
  }
  
  int max = 0;
  for (int i = 0; i < n - 1; i++) {
    int sum = a[i] + a[i + 1];
    if (sum > max) max = sum;
  }
  
  printf("%d\n", max);
}
