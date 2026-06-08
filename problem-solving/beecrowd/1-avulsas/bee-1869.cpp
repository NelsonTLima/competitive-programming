#include <bits/stdc++.h>

using namespace std;

int main() {

  char digitTable[32] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'
  };
  int digitIndex;

  vector<unsigned long long> powTable = {1};
  unsigned long long power = 1;

  while (power <= numeric_limits<long long>::max() / 32){
    power *= 32;
    powTable.push_back(power);
  }

  int i;
  unsigned long long n, remainder;
  string result;
  vector<string> results;

  do{
    cin >> n;
    remainder = n;
    result = "";

    for (i = powTable.size() - 1; remainder < powTable[i] ; i--);

    for (i=i; i > 0; i--){
      power = powTable[i];
      digitIndex = remainder / power;
      result += digitTable[digitIndex];
      remainder -= power * digitIndex;
    }
    result += digitTable[remainder % 32];

    //cout << result << endl;
    results.push_back(result);

  } while ( n > 0 );

  for (i=0; i < results.size(); i++) cout << results[i] << "\n";

  return 0;
}
