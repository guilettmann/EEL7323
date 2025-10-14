#ifndef TOOMANYACTUATORSEXCEPTION_H
#define TOOMANYACTUATORSEXCEPTION_H

#include <exception>

class TooManyActuatorsException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Erro: número máximo de atuadores (5) excedido!";
    }
};

#endif

