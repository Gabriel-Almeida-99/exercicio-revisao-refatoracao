#include "../include/Empregado.hpp"

Empregado::Empregado(std::string _nome, double _salarioHora, double _horasTrabalhadas) {
    nome = _nome; 
    salarioHora = _salarioHora;
    horasTrabalhadas = _horasTrabalhadas; 
}

double Empregado::pagamentoMes(double _horasTrabalhadas) {
    unsigned padraoHoras = 8;
	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8) e atualizando as horas trabalhadas
    if (_horasTrabalhadas > padraoHoras) {
        double diferenca = _horasTrabalhadas - padraoHoras;
        _horasTrabalhadas += diferenca / 2;
    } 
	
    return _horasTrabalhadas * salarioHora;
}