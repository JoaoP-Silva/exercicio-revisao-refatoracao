#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public: 
	int projetos;
	
	Engenheiro(std::string _nome, double _salarioHora, int _projetos){
		nome= _nome;
		salarioHora= _salarioHora;
		projetos= _projetos;
	}
	Engenheiro(){}
};

