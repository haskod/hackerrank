#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = s.size();
  int a = ceil(sqrt(n));
  int b = ceil(sqrt(n));

  for (int i = 0; i < a; i++) {
    for (int j = i; j < n; j += b)
      cout << s[j];
    cout << " ";
  }

  cout << endl;

  return 0;
}
