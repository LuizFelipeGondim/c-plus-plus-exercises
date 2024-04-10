#include <iostream>
#include "Banco.hpp"
#include "ContaBancaria.hpp"

using namespace std;

const int TAM = 20;

Banco::Banco() {
  _numContas = 0;
  
  for(int i = 0; i < TAM; i++)
    _contas[i] = nullptr;
}

ContaBancaria* Banco::criarConta(int id, string cliente) {
  int ultimPosicao = _numContas;

  if (_numContas < 20){

    for(int i = 0; i < ultimPosicao; i++) {
      if (_contas[i]->_id == id) {
        cout << "ERRO: conta repetida" << endl;
        return nullptr;
      } 
    }    
    
    _contas[ultimPosicao] = new ContaBancaria(id, cliente);
    _numContas++;
    cout << "conta criada" << endl;

    return _contas[ultimPosicao];

  } else {
    cout << "ERRO: Nao ha mais espaco" << endl;
    return nullptr;
  }
}

ContaBancaria* Banco::pesquisa(int id) {
  for(int i = 0; i < _numContas; i++){
    if (_contas[i]->_id == id) {
      return _contas[i];
    } 
  }

  return nullptr;
}

void Banco::listaContas() {
  for(int i = 0; i < _numContas; i++)
    _contas[i]->imprime();
}