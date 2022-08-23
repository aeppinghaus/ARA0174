
#include <iostream>
using namespace std;

//
// Ler duas notas, calcular a media e exibir:
// reprovado para media inferior a 5
// recuperacao para media superior ou igual a 5 e menor 7
// aprovado para media superior ou igual a 7
//
int main() {
  string nome;
  float nota1 = 0, nota2 = 0;
  double media = 0;

  bool continua = true;

  while (continua) {
    cout << "Digite seu nome:\n"; // escreva, exibir na tela
    cin >> nome;
    cout << "\nDigite nota1:\n";
    cin >> nota1;
    cout << "\nDigite nota2:\n";
    cin >> nota2;
    media = (nota1 + nota2) / 2;

    cout << "\n Seu nome e: \t" << nome << "\n" << endl;
    cout << "Sua media final e:" << media << endl;

    if (media < 5) {
      cout << "E voce esta reprovado" << endl;
    } else if (media >= 5 && media < 7) {
      cout << "E voce esta em recuperacao" << endl;
    } else {
      cout << "E voce esta aprovado" << endl;
    } // fim if

    cout << "\n Continua ? (0-nao/1-sim)" << endl;
    cin >> continua;
  } // fim while
}
 
