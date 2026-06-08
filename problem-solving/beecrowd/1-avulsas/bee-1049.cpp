#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  string a, b ,c;

  cin >> a;
  cin >> b;
  cin >> c;

  map<string, map<string, map<string, string>>> animais;

  animais["vertebrado"]["ave"]["carnivoro"] = "aguia\n";
  animais["vertebrado"]["ave"]["onivoro"] = "pomba\n";
  animais["vertebrado"]["mamifero"]["onivoro"] = "homem\n";
  animais["vertebrado"]["mamifero"]["herbivoro"] = "vaca\n";
  animais["invertebrado"]["inseto"]["hematofago"] = "pulga\n";
  animais["invertebrado"]["inseto"]["herbivoro"] = "lagarta\n";
  animais["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga\n";
  animais["invertebrado"]["anelideo"]["onivoro"] = "minhoca\n";

  cout << animais[a][b][c];

  return 0;
}
