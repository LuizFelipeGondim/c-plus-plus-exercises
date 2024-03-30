#ifndef BANCO_H
#define BANCO_H
#include "ContaBancaria.hpp"
#include <string>

struct Banco {
  int _numContas;
  ContaBancaria* _contas[20];

  Banco(); 

  ContaBancaria* criarConta(int id, std::string cliente);

  ContaBancaria* pesquisa(int id);

  void listaContas();

};

#endif