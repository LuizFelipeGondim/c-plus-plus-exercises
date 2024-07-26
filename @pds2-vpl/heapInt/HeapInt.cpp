#include "HeapInt.hpp"

HeapInt::HeapInt() {
    ponteiro = new int(0);
}

HeapInt::HeapInt(int valor) {
    ponteiro = new int(valor);
}

HeapInt::HeapInt(const HeapInt& elementoParaCopia) {
    ponteiro = new int(*elementoParaCopia.ponteiro);
}

HeapInt::~HeapInt() {
    delete ponteiro;
}

HeapInt& HeapInt::operator=(int valor) {
    *ponteiro = valor;
    return *this;
}

HeapInt& HeapInt::operator=(const HeapInt& elementoParaCopia) {
    if (this != &elementoParaCopia) {
        *ponteiro = *elementoParaCopia.ponteiro;
    }
    return *this;
}

HeapInt HeapInt::operator+(const HeapInt& elementoParaCopia) const {
    return HeapInt(*ponteiro + *elementoParaCopia.ponteiro);
}

HeapInt HeapInt::operator-(const HeapInt& elementoParaCopia) const {
    return HeapInt(*ponteiro - *elementoParaCopia.ponteiro);
}

bool HeapInt::operator==(const HeapInt& elementoParaCopia) const {
    return *ponteiro == *elementoParaCopia.ponteiro;
}

std::ostream& operator<<(std::ostream& out, const HeapInt& h) {
    out << *h.ponteiro;
    return out;
}

std::istream& operator>>(std::istream& in, HeapInt& h) {
    in >> *h.ponteiro;
    return in;
}
