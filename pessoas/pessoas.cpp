// Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados 
// em um variavel do tipo struct. O programa deve permitir que o usuário digite o nome de 3 
// pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

#include <iostream>
#include <string>
#define TAM 3

using namespace std;

struct Pessoa {
  string nome;
  int idade;
  float peso;
  float altura;
};

int main() {
  Pessoa pessoas[TAM];

  cout << "Informe os dados das pessoas:\n";

  for(int i = 0; i < TAM; i++) {
    cout << "Pessoa " << i + 1 << ":\n";
    cout << "Nome: ";
    cin >> pessoas[i].nome;

    cout << "Idade: ";
    cin >> pessoas[i].idade;

    cout << "Peso: ";
    cin >> pessoas[i].peso;

    cout << "Altura: ";
    cin >> pessoas[i].altura;
  }

  cout << "\nPessoas listadas:\n";

  for(int i = 0; i < TAM; i++) {
    cout << "Pessoa " << i + 1 << ":\n";
    cout << "Nome: " << pessoas[i].nome << "\n";
    cout << "Idade: " << pessoas[i].idade << "\n";
    cout << "Peso: " << pessoas[i].peso << "\n";
    cout << "Altura: " << pessoas[i].altura << "\n\n";
  }

  return 0;
}