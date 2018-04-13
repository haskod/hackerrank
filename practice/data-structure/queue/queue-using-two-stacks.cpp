#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  scanf("%d", &q);

  queue<int> queue;
  while (q--) {
    int t;
    scanf("%d", &t);

    if (t > 2)
      printf("%d\n", queue.front());
    else {
      if (t > 1)
        queue.pop();
      else {
        int v;
        scanf("%d", &v);

        queue.push(v);
      }
    }
  }

  return 0;
}
