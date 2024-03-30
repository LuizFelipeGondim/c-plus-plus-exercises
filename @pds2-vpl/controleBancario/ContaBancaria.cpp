#include <iostream>
#include <string.h>
#include "ContaBancaria.hpp"

using namespace std;

ContaBancaria::ContaBancaria(int id, string cliente) {
  _id = id;
  _cliente = cliente;
  _saldo = 0.0;
}

void ContaBancaria::deposito(float valor) {
  _saldo += valor;
  cout << "deposito efetuado" << endl;
}

void ContaBancaria::saque(float valor) {
  if (_saldo > valor) {
    _saldo -= valor;
    cout << "saque efetuado" << endl;
  } else {
    cout << "ERRO: saldo insuficiente" << endl;
  }
  
}

void ContaBancaria::pix(ContaBancaria &contaDestino, float valor) {
  if (_saldo > valor) {
    contaDestino._saldo += valor;
    _saldo -= valor;
    cout << "pix efetuado" << endl;
  } else {
    cout << "ERRO: saldo insuficiente" << endl;
  }
}

void ContaBancaria::imprime() {
  cout << fixed;
  cout.precision(2);

  cout << _id << " " << _cliente << " " << _saldo << endl;
}

