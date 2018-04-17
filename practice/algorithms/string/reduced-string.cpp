#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] == s[i]) {
      s.erase(i - 1, 2);
      i = 0;
    }
  }

  if (s.size() == 0)
    printf("Empty String");
  else
    for (char c : s) printf("%c", c);

  printf("\n");

  return 0;
}
