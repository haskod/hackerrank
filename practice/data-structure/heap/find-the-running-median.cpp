#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int f;
  scanf("%d", &f);
  n--;

  printf("%.1f\n", (float) f);

  priority_queue<int, vector<int>, greater<int>> minHeap;
  priority_queue<int, vector<int>> maxHeap;

  while (n--) {
    int x;
    scanf("%d", &x);

    if (x < f)
      maxHeap.push(x);
    else
      minHeap.push(x);

    int l = maxHeap.size();
    int r = minHeap.size();

    if ((l - r) > 1) {
      int t = maxHeap.top();
      maxHeap.pop();

      minHeap.push(f);
      f = t;
    }
    else if ((r - l) > 1) {
      int t = minHeap.top();
      minHeap.pop();

      maxHeap.push(f);
      f = t;
    }

    float m;
    if (l == r || (l + r + 1) % 2 == 1)
      m = f;
    else if (l < r)
      m = (f + minHeap.top()) / 2.0;
    else
      m = (maxHeap.top() + f) / 2.0;

    printf("%.1f\n", m);
  }

  return 0;
}
