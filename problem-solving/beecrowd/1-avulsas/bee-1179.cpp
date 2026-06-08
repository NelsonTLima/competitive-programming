#include <bits/stdc++.h>

using namespace std;

void print_array(char type[6], int arr[5], int n){
  for (int i = 0; i < n; i++){
    cout << type << "[" << i << "] = " << arr[i] <<  "\n";
  }
}


int main() {

  int par[5], impar[5],n , i_par = 0, i_impar = 0, i=0;
  char par_string[6] = "par", impar_string[6] = "impar";

  for (i=0; i < 15; i++){
    cin >> n;

    if (n % 2 == 0){
      par[i_par] = n;
      i_par++;
    }
    else{
      impar[i_impar] = n;
      i_impar++;
    }

    if (i_par == 5){
      print_array(par_string, par, 5);
      i_par = 0;
    }

    if (i_impar == 5){
      print_array(impar_string, impar, 5);
      i_impar = 0;
    }
  }

  print_array(impar_string, impar, i_impar);
  print_array(par_string, par, i_par);

  return 0;
}
