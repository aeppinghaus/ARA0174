#include <iostream>
using namespace std;

// avisando ao compiador que a funcao existe
void media(float nota1, float nota2);

float media2(float nota1, float nota2) {
  float media = (nota1 + nota2) / 2;
  return media;
}

int main() {

  cout << "Hello World!\n";

  // exibo dentro da funcao
  media(2, 8);
  media(5, 7);
  media(8, 10);

  // exibo fora da funcao
  cout << "\nA media 2 == " << media2(2, 8) << endl;
  cout << "A media 2 == " << media2(5, 7) << endl;
  cout << "A media 2 == " << media2(8, 10) << endl;
}
//                2    ,  8
void media(float nota1, float nota2) {
  float media = (nota1 + nota2) / 2;
  cout << "\nMedia = " << media << endl;
}

