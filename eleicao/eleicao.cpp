// Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. 
// Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.

#include <iostream>
#define TAM 3

using namespace std;

int main() {
  int candidatos[TAM], totalEleitores, voto; 

  for(int i = 0; i < TAM; i++){
    candidatos[i] = 0;
  }

  cout << "Informe o total de eleitores: " << endl;
  cin >> totalEleitores;

  for(int i = 0; i < totalEleitores; i++) {
    cout << "Informe o numero do candidato: ";
    cin >> voto;

    if (voto < 1 || voto > TAM){
      cout << "Voto invalido, vote novamente!\n";
      i--;
    } else {
      candidatos[voto - 1]++;
    }

  }

  cout << "\nNumero de votos de cada candidato: \n";
  for(int i = 0; i < TAM; i++){
    cout << "Candidato " << i + 1 << ": " << candidatos[i] << "\n";
  }
  
  return 0;
}