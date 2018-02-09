#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  
  priority_queue<int, vector<int>> pq;
  while (n--)
  {
    int x;
    scanf("%d", &x);
    
    pq.push(x);
  }
  
  int j = 0;
  long m = 0;
  while (!pq.empty())
  {
    int c = pq.top();
    pq.pop();
    
    m += c * pow(2, j);
    
    j++;
  }
  
  printf("%ld\n", m);
  
  return 0;
}

