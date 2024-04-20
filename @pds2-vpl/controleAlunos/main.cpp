#include <iostream>
#include <string.h>
#include <set>
#include "Aluno.hpp"

struct ComparadorAluno {
  bool operator()(const Aluno& a, const Aluno& b) const {
    return a._nome < b._nome;
  }
};

int main() {
  std::set<Aluno, ComparadorAluno> alunos;
  std::vector<int> notas;
  std::string nome;
  int matricula;
  int nota = 0;

  while((std::cin >> nome) && nome != "END") {

    std::cin >> matricula;
    
    while(std::cin >> nota && nota != -1)
      notas.push_back(nota);

    alunos.insert({matricula, nome, notas});
    notas.clear();
  }

  for (const auto& aluno : alunos) {
    aluno.mostrarDados();

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << aluno.mediaNotas() << " ";
    std::cout << aluno.notaMaxima() << " " << aluno.notaMinima() << std::endl;
  }

  return 0;
}