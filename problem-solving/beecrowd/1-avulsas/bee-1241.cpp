#include <iostream>
#include <string>

using namespace std;

int main() {
  int casos;
  string n1, n2;

  cin >> casos;
  for (int i=0; i < casos; i++){
    cin >> n1 >> n2;
    string flag = "encaixa\n";
    for (int i=0; i < n2.length(); i++){
      if (n2[n2.length() - i - 1] != n1[n1.length()- i - 1])
        flag = "nao encaixa\n";
    }
    cout << flag;
  }
  return 0;
}
