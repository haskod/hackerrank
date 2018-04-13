#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  vector<int> b (6, 0);
  while (n--) {
    int x;
    scanf("%d", &x);

    b[x]++;
  }

  auto it = max_element(b.begin(), b.end());
  int pos = distance(b.begin(), it);

  printf("%d\n", pos);

  return 0;
}
