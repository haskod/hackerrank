#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  
  int po = 0;
  int ne = 0;
  int ze = 0;
  float n = t;
  
  while (t--) {
    int x;
    scanf("%d", &x);
    
    if (x == 0) ze++;
    else if (x > 0) po++;
    else ne++;
  }
  
  printf("%.6f\n", po / n);
  printf("%.6f\n", ne / n);
  printf("%.6f\n", ze / n);
  
  return 0;
}
