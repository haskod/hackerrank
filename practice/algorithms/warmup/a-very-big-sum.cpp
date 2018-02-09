#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  
  long long sum = 0;
  while (n--) {
    long long x;
    scanf("%lld", &x);
    
    sum += x;
  }
  
  printf("%lld\n", sum);
  
  return 0;
}

