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
  //Pessoa pessoas[TAM];
  Pessoa *pessoas = new Pessoa[TAM];
  // A diferenca entre essas duas declaracoes eh que a palavra-chave new é usada para alocar memória dinamicamente.
  /* No primeiro caso, a memória é alocada na stack ou na área de dados estática, dependendo de onde a declaração 
    ocorre. Isso significa que a memória é liberada automaticamente quando a variável sai de escopo. Essa forma é 
    mais simples e direta, especialmente quando o tamanho do array é conhecido em tempo de compilação e não precisa 
    ser alterado durante a execução do programa. */
  /* No segundo caso, a memória é alocada dinamicamente no heap, o que significa que o array persistirá até que seja 
    explicitamente desalocado usando delete[] pessoas;. É útil quando o tamanho do array não é conhecido em tempo de 
    compilação ou quando se deseja controlar manualmente o tempo de vida do array. */
  /* Portanto, a escolha entre as duas formas depende das necessidades específicas do programa, da vida útil 
    necessária para o array e da complexidade do código. */


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