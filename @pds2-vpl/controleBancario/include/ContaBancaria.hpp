#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H
#include <string>

struct ContaBancaria {
  int _id;
  std::string _cliente;
  float _saldo;

  ContaBancaria(int id, std::string cliente); 

  void deposito(float valor);

  void saque(float valor);

  void pix(ContaBancaria &contaDestino, float valor);

  void imprime();
};

#endif