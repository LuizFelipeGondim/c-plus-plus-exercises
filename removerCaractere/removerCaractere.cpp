// Faça um rotina que remova um caracter de uma string do tipo char str[100], dada a posição do caracter.

#include <iostream>
#include <cstring>
#define TAM_MAX 100

using namespace std;

int main() {

  char str[TAM_MAX];
  int posicao, quantCaracteres;

  cout << "Digite uma string: ";
  cin.getline(str, TAM_MAX);

  quantCaracteres = strlen(str);

  cout << "Digite a posicao a ser excluida (1 a " << quantCaracteres << "): ";
  cin >> posicao;

  if(posicao < 0 || posicao > quantCaracteres){
    cout << "Posicao Invalida!" << endl;
  } else {
    for(int i = posicao - 1; i < quantCaracteres; i++){
      str[i] = str[i + 1];
    }
    
    str[quantCaracteres] = '\0';

    cout << "Resultado: " << str << endl;
  }


  return 0;
}