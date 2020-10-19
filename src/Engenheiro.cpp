#include "../include/Engenheiro.hpp"
#include <iostream> 

Engenheiro::Engenheiro(std::string _nome, double _salarioHora, double _horasTrabalhadas, int _projetos) : Empregado(_nome, _salarioHora, _horasTrabalhadas), projetos(_projetos) {}

void Engenheiro::print() {
  std::cout << "Nome: " << nome << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << projetos << std::endl; 
  std::cout << std::endl;
}
