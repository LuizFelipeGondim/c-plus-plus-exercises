// Você devera implementar um programa que leia um conjunto de n números (do tipo float) e calcule a 
// média aritmética e o desvio padrão desses números. Para isso você deverá implementar duas funções, 
// uma que calcula a média e outra que calcula o desvio padrão. O seu programa deverá ler o valor de n, 
// em seguida o valor dos n números x_1, x_2, ... ,x_n e calcular e imprimir em linhas separadas a média e o desvio padrão.

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
  int n;
  float soma = 0.0,  ma, dp;

  cin >> n;

  float x[n];

  for(int i = 0; i < n; i++) {
    cin >> x[i];
    soma += x[i];
  }

  ma = soma/n;
  soma = 0.0;

  for(int i = 0; i < n; i++) {
    soma += pow(x[i] - ma, 2); // Somar quadrados
  }

  dp = sqrt(soma/3);

  cout << fixed << setprecision(4);
  cout << ma << endl;
  cout << dp;


  return 0;
}

