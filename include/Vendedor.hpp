#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"
#include <string>

class Vendedor : public Empregado {

  private:
    double quotaMensalVendas;

  public:
    Vendedor(std::string _nome, double _salarioHora, double _horasTrabalhadas, double _quotaMensalVendas);
	  double quotaTotalAnual();
    void print() override; 
};

#endif 