#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  
  vector<long> c (m);
  for (int i = 0; i < m; i++) scanf("%ld", &c[i]);
  
  vector<long> w (n + 1);
  w[0] = 1;
  
  for (int i = 0; i < m; i++)
    for (int j = c[i]; j < n + 1; j++)
      w[j] += w[j - c[i]];
  
  printf("%ld", w[n]);
  
  return 0;
}

