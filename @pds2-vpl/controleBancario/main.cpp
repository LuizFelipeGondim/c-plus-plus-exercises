#include <iostream>
#include <string.h>
#include "ContaBancaria.hpp"
#include "Banco.hpp"

using namespace std;

int main() {
  ContaBancaria* conta = nullptr;
  ContaBancaria* contaDestino = nullptr;
  Banco* banco = new Banco();

  char opcao;
  int id;
  string cliente;
  float valor;

  while (opcao != 'T'){
    cin >> opcao;

    switch(opcao) {
      case 'C':
        cin >> id >> cliente;
        banco->criarConta(id, cliente);

        break;

      case 'D':
        cin >> id >> valor;
        conta = banco->pesquisa(id);

        if (conta != nullptr)
          conta->deposito(valor);

        break;

      case 'S':
        cin >> id >> valor;
        conta = banco->pesquisa(id);

        if (conta != nullptr)
          conta->saque(valor);

        break;

      case 'P':
        int idDestino;
        cin >> id >> idDestino >> valor;
        conta = banco->pesquisa(id);
        contaDestino = banco->pesquisa(idDestino);

        if (conta != nullptr && contaDestino != nullptr)
          conta->pix(*contaDestino, valor);
        
        break;

      case 'I':
        banco->listaContas();
        break;
    }
  }

  for(int i = 0; i < banco->_numContas; i++)
    delete banco->_contas[i];
  
  delete banco;

  return 0;
}