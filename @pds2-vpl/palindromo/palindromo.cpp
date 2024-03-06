// Você deverá implementar um programa para verificar se um texto fornecido como entrada é um palíndromo. 
// Um palíndromo é um texto que pode ser lido, indiferentemente, da esquerda para a direita ou vice-versa. 
// O seu programa deverá ler uma string da entrada e imprimir SIM caso seja palíndromo e NAO caso não seja.

#include <iostream>
#include <string>

using namespace std;

int main() {
  string palavra;
  int length;
  bool palindromo = true;

  getline(cin, palavra);

  length = palavra.length();

  for (int i = 0; i < length/2; i++) {
    if (palavra[i] != palavra[length - i - 1]) {
      palindromo = false;
      break;
    }
  }

  if (palindromo) {
    cout << "SIM";
  } else {
    cout << "NAO";
  }

  return 0;
}