#include "../include/Vendedor.hpp"
#include <iostream>
	
Vendedor::Vendedor(std::string _nome, double _salarioHora, double _horasTrabalhadas, double _quotaMensalVendas) : Empregado(_nome, _salarioHora, _horasTrabalhadas), quotaMensalVendas(_quotaMensalVendas){}

double Vendedor::quotaTotalAnual() {
	unsigned totalMesesAno = 12;
	return quotaMensalVendas * totalMesesAno;
}

void Vendedor::print() {
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
	std::cout << "Quotas vendas: " << quotaTotalAnual() << std::endl;
	std::cout << std::endl;
}
	

/*  std::cout << "Nome: " << vend1.nome << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl; */