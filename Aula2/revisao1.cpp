#include <iostream>
using namespace std;

// \n - pula linha
// \t - tabulacao

int main() {
  string nome;
  char sexo;
  float nota1 = 0, nota2 = 0;
  double salario = 0, media = 0;
  int idade = 0;
  bool fezProva = false;

  // <<---------
  cout << "Digite \t\tseu nome:\n"; // escreva, exibir na tela
  cin >> nome;

  cout << "\nDigite nota1:\n";
  cin >> nota1;
  cout << "\nDigite nota2:\n";
  cin >> nota2;
  media = (nota1 + nota2) / 2;

  cout << "\n Seu nome e: \t" << nome << "\n" << endl;
  cout << "Sua media final e:" << media << endl;
}
