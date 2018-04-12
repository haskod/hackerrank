#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  scanf("%d", &q);

  map<int, bool> heap;
  while (q--) {
    int t;
    scanf("%d", &t);

    if (t > 2) {
      auto it = heap.begin();
      while (!it->second) it++;

      printf("%d\n", it->first);
    }
    else {
      int v;
      scanf("%d", &v);

      if (t > 1)
        heap[v] = false;
      else
        heap[v] = true;
    }
  }

  return 0;
}
