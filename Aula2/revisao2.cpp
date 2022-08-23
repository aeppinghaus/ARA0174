#include <iostream>
using namespace std;

//
// Ler duas notas, calcular a media e exibir:
// aprovado para media superior ou igual a 7
// recuperacao para media inferior a 7
//
int main() {
  string nome;
  float nota1 = 0, nota2 = 0;
  double media = 0;
  
  cout << "Digite \t\tseu nome:\n"; // escreva, exibir na tela
  cin >> nome;
  
  cout << "\nDigite nota1:\n";
  cin >> nota1;
  cout << "\nDigite nota2:\n";
  cin >> nota2;
  media = (nota1 + nota2) / 2;
  cout << "\n Seu nome e: \t" << nome << "\n" << endl;
  cout << "Sua media final e:" << media << endl;
  if (media >= 7) {
    cout << "E voce está aprovado" << endl;
  } else {
    cout << "E voce está em recuperacao" << endl;
  }
}
