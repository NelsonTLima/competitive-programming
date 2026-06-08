#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<unsigned> arr, int left, int right, int n)
{
  while (left <= right) {
    int middle = left + (right - left) / 2;

    if (arr[middle] == n and (arr[middle - 1] != n or middle == 0)) return middle;

    if (arr[middle] < n) left = middle + 1;
    else right = middle - 1;
  }

  // If we reach here, then element was not present
  return -1;
}
int main() {

  vector<vector<string>> cases;
  unsigned q, n;

  while (true)
  {
    cin >> n >> q;
    if (n == 0 and q == 0) break;

    unsigned marble, query;
    vector<unsigned> marbles;
    int index;
    vector<string> case_outputs;
    string output;

    // Raju's marbles;
    for (int i=0; i < n; i++){
      cin >> marble;
      marbles.push_back(marble);
    }

    sort(marbles.begin(), marbles.end());

    for (int i=0; i < q; i++){
      cin >> query;
      index = binarySearch(marbles, 0, marbles.size() -1 , query) + 1;

      output = (index == 0) ?
        to_string(query) + " not found\n" :
        to_string(query) + " found at " + to_string(index) + "\n";

      case_outputs.push_back(output);
    }
    cases.push_back(case_outputs);
  }

  int i = 0;
  for (vector<string> c : cases){
    i++;
    cout << "CASE# " << i << ":\n";
    for (string output : c) cout << output;
  }

  return 0;
}
