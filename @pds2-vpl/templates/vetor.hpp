#ifndef VETOR_H
#define VETOR_H

#include <iostream>

template <typename T>
class Vetor {
private:
  T* _vetor;
  int _tam;
  int _numElementos = 0;

public:
    
  Vetor(int n) : _tam(n) {
    _vetor = new T[_tam];
  }

  Vetor(const Vetor& vetorParaCopia) : _tam(vetorParaCopia._tam), _numElementos(vetorParaCopia._numElementos) {
    _vetor = new T[_tam];
    for (int i = 0; i < _numElementos; ++i) {
      _vetor[i] = vetorParaCopia._vetor[i];
    }
  }

  ~Vetor() {
    delete[] _vetor;
  }

  void SetElemento(int i, T x) {
    if (i >= 0 && i < _numElementos) {
      _vetor[i] = x;
    }
  }

  T GetElemento(int i) const {
    if (i >= 0 && i < _numElementos) {
      return _vetor[i];
    }
    return T();
  }

  void AdicionaElemento(T x) {
    if (_numElementos < _tam) {
      _vetor[_numElementos++] = x;
    }
  }

  void Imprime() const {
    for (int i = 0; i < _numElementos; ++i) {
      std::cout << _vetor[i] << " ";
    }
    std::cout << std::endl;
  }
};

#endif
