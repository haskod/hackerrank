#include <bits/stdc++.h>
using namespace std;

struct node {
  int parent;
  int children = 0;
};

int main() {
  int n, m;
  scanf("%d%d", &n, &m);

  int u, v;
  vector<node> tree (n + 1);

  int t = m;
  while (t--) {
    int u, v;
    scanf("%d%d", &u, &v);

    tree[u].parent = v;
    tree[v].children++;
  }

  int sum = 0;
  for (int i = n; i > 1; i--) {
    if (tree[i].children % 2) {
      sum++;
      tree[tree[i].parent].children--;
    }
  }

  printf("%d\n", sum);

  return 0;
}
