#include "../include/Engenheiro.hpp"
#include "../include/Vendedor.hpp"
#include <vector> 

int main() {
//Para Engenheiros inserir os dados em ordem: nome, salarioHora, horasTrabalhadas e projetos
  Engenheiro eng1("Joao Snow", 35, 9.5, 3);
  eng1.print();

  Engenheiro eng2("Daniela Targaryen", 30, 8, 1);
  eng2.print();
 
  Engenheiro eng3("Bruno Stark", 30, 8, 2);
  eng3.print(); 

//Para Vendedores inserir os dados em ordem: nome, salarioHora, horasTrabalhadas e quotaMensalVendas
  
  Vendedor vend1("Tonho Lannister", 20, 6, 5000);
  vend1.print();

  Vendedor vend2("Jose Mormont", 25, 8, 3000); 
  vend2.print();
	
  Vendedor vend3("Sonia Stark", 30, 8, 4000);
  vend3.print();
  
  
  return 0;	
}