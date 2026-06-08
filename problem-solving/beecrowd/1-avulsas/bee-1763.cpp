#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, string> dicionario;

  dicionario.emplace("brasil","Feliz Natal!");
  dicionario.emplace("alemanha", "Frohliche Weihnachten!");
  dicionario.emplace("austria", "Frohe Weihnacht!");
  dicionario.emplace("coreia", "Chuk Sung Tan!");
  dicionario.emplace("espanha","Feliz Navidad!");
  dicionario.emplace("grecia", "Kala Christougena!");
  dicionario.emplace("estados-unidos", "Merry Christmas!");
  dicionario.emplace("inglaterra", "Merry Christmas!");
  dicionario.emplace("australia","Merry Christmas!");
  dicionario.emplace("portugal","Feliz Natal!");
  dicionario.emplace("suecia","God Jul!");
  dicionario.emplace("turquia","Mutlu Noeller");
  dicionario.emplace("argentina","Feliz Navidad!");
  dicionario.emplace("chile","Feliz Navidad!");
  dicionario.emplace("mexico","Feliz Navidad!");
  dicionario.emplace("antardida","Merry Christmas!");
  dicionario.emplace("canada","Merry Christmas!");
  dicionario.emplace("irlanda","Nollaig Shona Dhuit!");
  dicionario.emplace("belgica", "Zalig Kerstfeest!");
  dicionario.emplace("italia","Buon Natale!");
  dicionario.emplace("libia","Buon Natale!");
  dicionario.emplace("siria","Milad Mubarak!");
  dicionario.emplace("marrocos","Milad Mubarak!");
  dicionario.emplace("japao", "Merii Kurisumasu!");

  string pais;
  vector<string> saida;

  while (cin >> pais){
  if (!dicionario.count(pais)){
    saida.push_back("--- NOT FOUND ---\n");
    continue;
  }
  saida.push_back(dicionario[pais] + "\n");
  }

  for (unsigned i=0; i < saida.size(); i++){
    cout << saida[i];
  }

  return 0;
}
