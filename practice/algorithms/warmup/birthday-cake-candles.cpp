#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  
  vector<int> h (n);
  for (int i = 0; i < n; i++) scanf("%d", &h[i]);
  
  auto it = max_element(h.begin(), h.end());
  int max = h[distance(h.begin(), it)];
  int total = count_if(h.begin(), h.end(), [max](int elm) { return elm == max; });
  
  printf("%d\n", total);
}
