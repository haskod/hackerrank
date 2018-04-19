#include <bits/stdc++.h>
using namespace std;

struct node {
  node* children[26];
  bool end;
  int size;

  node() {
    memset(children, 0, sizeof(children));
    end = false;
    size = 0;
  }
};

void insert(node* n, char* c) {
  if (*c) {
    int i = *c - 'a';

    if (!n->children[i]) n->children[i] = new node();

    n->size++;

    insert(n->children[i], c + 1);
  }
  else
    n->end = true;
}

int total(node* n, char* c) {
  if (*c) {
    int i = *c - 'a';

    if (!n->children[i]) return 0;

    return total(n->children[i], c + 1);
  }

  if (n->end) return n->size + 1;

  return n->size;
}

int main() {
  int n;
  cin >> n;

  node* trie = new node();

  while (n--) {
    string t, s;
    cin >> t >> s;

    if (t == "add")
      insert(trie, &s[0]);
    else
      printf("%d\n", total(trie, &s[0]));
  }

  return 0;
}
