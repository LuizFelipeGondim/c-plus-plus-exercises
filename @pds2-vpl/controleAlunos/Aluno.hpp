#ifndef ALUNO_H
#define ALUNO_H
#include <string>
#include <vector>

struct Aluno {
  int _matricula;
  std::string _nome;
  std::vector<int> _notas;

  Aluno(int matricula, std::string nome, std::vector<int> notas); 

  float mediaNotas() const;

  int notaMaxima() const;

  int notaMinima() const;

  void mostrarDados() const;

};

#endif