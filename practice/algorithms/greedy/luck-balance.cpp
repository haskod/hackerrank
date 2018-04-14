#include <bits/stdc++.h>
using namespace std;

struct com {
  int luck;
  bool important;

  com(int l, bool i) {
    this->luck = l;
    this->important = i;
  }

  bool operator < (com const& c) const {
    return this->luck < c.luck;
  }
};

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  priority_queue<com, vector<com>> heap;
  while (n--) {
    int x, y;
    scanf("%d%d", &x, &y);

    com c (x, y == 1 ? true : false);
    heap.push(c);
  }

  int lucks = 0;
  while (!heap.empty()) {
    com m = heap.top();
    heap.pop();

    if (!m.important)
      lucks += m.luck;
    else {
      if (k > 0) {
        lucks += m.luck;
        k--;
      }
      else
        lucks -= m.luck;
    }
  }

  printf("%d\n", lucks);

  return 0;
}
