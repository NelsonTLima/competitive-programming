#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string mes[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
  };
  cin >> n;
  n--;

  cout << mes[n] << endl;

  return 0;
}
