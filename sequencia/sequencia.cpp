// Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H com N termos.

#include <iostream>

using namespace std;

float calculaValorH(int n) {
  float h = 0;

  for(int i = 1; i <= n; i++) {
    h += 1.0/i;
  }

  return h;
}

int main() {
  int n;
  float valorH;

  cout << "Digite o valor de N: ";
  cin >> n;

  valorH = calculaValorH(n);
  
  cout << "O valor da soma de H com N termos eh: " << valorH << endl;

  return 0;
}