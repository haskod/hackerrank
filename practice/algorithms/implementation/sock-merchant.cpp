#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  map<int, int> socks;
  while (n--) {
    int x;
    scanf("%d", &x);

    auto it = socks.find(x);
    if (it != socks.end())
      socks[x]++;
    else
      socks[x] = 1;
  }

  int sum = 0;
  for (auto it = socks.begin(); it != socks.end(); it++)
    sum += it->second / 2;

  printf("%d\n", sum);

  return 0;
}
