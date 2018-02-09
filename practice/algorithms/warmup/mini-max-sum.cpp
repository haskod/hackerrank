#include <bits/stdc++.h>
using namespace std;

int main() {
  long a[5];
  for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
  
  vector<long> s (5);
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++)
      if (i != j) s[i] += a[j];
  
  sort(s.begin(), s.end());
  
  printf("%ld %ld\n", s[0], s[4]);
  
  return 0;
}

