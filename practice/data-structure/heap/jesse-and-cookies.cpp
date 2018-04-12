#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  priority_queue<int, vector<int>, greater<int>> heap;

  while (n--) {
    int x;
    scanf("%d", &x);

    heap.push(x);
  }

  long sum = 0;
  while (!heap.empty() && heap.top() < k) {
    int t = heap.top();
    heap.pop();

    if (!heap.empty()) {
      int u = heap.top();
      heap.pop();

      int s = t + (2 * u);

      heap.push(s);
    }

    sum++;
  }

  printf("%ld\n", heap.top() < k ? -1 : sum);

  return 0;
}
