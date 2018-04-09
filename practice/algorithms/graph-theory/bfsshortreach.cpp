#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  scanf("%d", &q);

  while (q--) {
    int n, m;
    scanf("%d%d", &n, &m);

    vector<int> g[n];

    while (m--) {
      int u, v;
      scanf("%d%d", &u, &v);

      g[--u].push_back(--v);
      g[v].push_back(u);
    }

    int s;
    scanf("%d", &s);

    vector<int> visits (n, 0);
    vector<bool> visited (n, false);

    list<int> queue;

    visited[--s] = true;
    queue.push_back(s);

    while (!queue.empty()) {
      int s = queue.front();
      queue.pop_front();

      for (auto it = g[s].begin(); it != g[s].end(); it++) {
        if (!visited[*it]) {
          visited[*it] = true;
          visits[*it] += visits[s] + 6;
          queue.push_back(*it);
        }
      }
    }

    for (int i = 0; i < n; i++) {
      if (i != s) {
        printf("%d", (visits[i] == 0 ? -1 : visits[i]));

        if (i < n - 1) printf(" ");
      }
    }

    printf("\n");
  }
}
