#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int hh = stoi(s.substr(0, 2));
  string mm = s.substr(3, 2);
  string ss = s.substr(6, 2);
  string ff = s.substr(8, 2);
  
  if (ff == "PM" && hh != 12) hh += 12;
  
  if (ff == "AM" && hh == 12) hh = 0;
  
  if (hh < 10) cout << 0;
  cout << hh << ":" << mm << ":" << ss << endl;
}
