#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include "Aluno.hpp"

Aluno::Aluno(int matricula, std::string nome, std::vector<int> notas) {
  _matricula = matricula;
  _nome = nome;
  _notas = notas;
}

float Aluno::mediaNotas() const {
  float somaNotas = 0.0;

  std::for_each(_notas.begin(), _notas.end(), [&somaNotas](int nota) {
    somaNotas += nota;
  });

  return somaNotas / _notas.size();
}

int Aluno::notaMaxima() const{
  return *std::max_element(_notas.begin(), _notas.end());
}

int Aluno::notaMinima() const{
  return *std::min_element(_notas.begin(), _notas.end());
}

void Aluno::mostrarDados() const {
  std::cout << _matricula << " " << _nome;

  for (const auto& _nota : _notas)
    std::cout << " " << _nota;

  std::cout << std::endl;
}