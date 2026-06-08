#include <bits/stdc++.h>

using namespace std;

int main() {
  string linha;
  vector<string> linhas;
  set<string> palavras;

  while (getline(cin, linha)){
    string palavra = "";
    for (char i : linha) {
      if (isalpha(i)){
        palavra += tolower(i);
      }
      else if (palavra != "") {
        palavras.insert(palavra);
        palavra = "";
      }
    }
    if (palavra != "") {
      palavras.insert(palavra);
      palavra = "";
    }
  }

  auto it = palavras.begin();
  for (unsigned i = 0; i < 5000; i++){
  //for (string i : palavras){
    cout << *it << "\n";
    it++;
    if (it == palavras.end()) break;
  }

  return 0;
}
