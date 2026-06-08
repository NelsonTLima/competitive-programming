#include <bits/stdc++.h>

using namespace std;

long long solution(long long x)
{
  return pow(2, x) - 1;
}

int main(void)
{
  long long n;
  int i=1;
  while (cin >> n){
    if (n == 0) break;
    cout << "Teste " << i << "\n" << solution(n) << "\n" << endl;
    i++;
  }

  return 0;
}
