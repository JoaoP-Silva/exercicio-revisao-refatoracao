#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  
  public:double quotaMensalVendas;
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
	Vendedor(std::string _nome, double _salarioHora, double _quotaMensalVendas){
		nome= _nome;
		salarioHora= _salarioHora;
		quotaMensalVendas= _quotaMensalVendas;
	}
	
	Vendedor(){}
};

