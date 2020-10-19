#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {
  protected:
    std::string nome; 
    double salarioHora;
    double quotaMensalVendas;
    double horasTrabalhadas; 

  public:
    Empregado() = default; 
    Empregado(std::string _nome, double _salarioHora, double _horasTrabalhadas);
    double pagamentoMes(double _horasTrabalhadas);
    virtual void print() {};
};

#endif