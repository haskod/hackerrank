#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  
  while (n--) {
    int g;
    scanf("%d", &g);
    
    int p = 5 - (g % 5);
    if (g > 37 && p < 3) g += p;
    
    printf("%d\n", g);
  }
}
