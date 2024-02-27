// Faça um programa que peça um numero inteiro positivo e em seguida mostre este numero invertido. Exemplo: 12376489 => 98467321.

#include <iostream>

using namespace std;

int inverterNumero(int num);

int main() {
    int num;
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
    if (num >= 0) {
        int numeroInvertido = inverterNumero(num);
        cout << "Numero invertido: " << numeroInvertido << endl;
    } else {
        cout << "Numero invalido." << endl;
    }
    
    return 0;
}

int inverterNumero(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}