#include <bits/stdc++.h>

using namespace std;

int main() {
  stack<char> painel;
  char face[4] = {'F','A','C','E'};
  unsigned venceram = 0;
  unsigned n;

  cin >> n;
  for (unsigned z=0; z < n; z++){

    // PAINEL   [F A C E]
    // ENTRADA  [       ]
    // COMP     [       ]
    // AUX      [       ]
    if (painel.empty()){
      for (char c : face){
        painel.push(c);
      }
    }

    // PAINEL   [F A C E]
    // ENTRADA  [E C A F]
    // COMP     [       ]
    // AUX      [       ]
    char entrada[4];
    for (unsigned i=0; i < 4; i++){
      cin >> entrada[i];
    }


    // PAINEL   [F A C E]
    // ENTRADA  [E C A F]
    // COMP     [F A C E]
    // AUX      [       ]
    stack<char> comparacao;
    for (unsigned i=0; i < 4; i++){
      comparacao.push(entrada[3-i]);
    }

    // PAINEL   [       ]
    // ENTRADA  [E C A F]
    // COMP     [       ]
    // AUX      [E C A F]
    stack<char> auxiliar;
    for (unsigned i=0; i < 4; i++){
      if (comparacao.top() != painel.top()){
        //cout << comparacao.top() << " é diferente de " << painel.top() << endl;
        break;
      }
      //cout << comparacao.top() << " é igual a " << painel.top() << endl;
      auxiliar.push(painel.top());
      comparacao.pop(); painel.pop();
    }

    // DEU MATCH.
    // PAINEL   [        ]
    // ENTRADA  [reinicia]
    // COMP     [reinicia]
    // AUX      [reinicia]
    if (comparacao.empty()){
      venceram++;
      continue;
    }

    // NÃO DEU MATCH.
    // PAINEL   [F A C E A C F E] <<+
    // ENTRADA  [A C F E]           |
    // COMP     [       ]           |
    // AUX      [esvazia] >>--------+
    for (unsigned i=0; i < auxiliar.size(); i++){
      painel.push(auxiliar.top());
      auxiliar.pop();
    }
    for (char c : entrada){
      painel.push(c);
    }
  }
  cout << venceram << endl;
}
