#pragma once
#include <iostream>
using namespace std;

class Persona{
	private:
		string nombre;
		int anio1,mes1,fech1,anio2,mes2,fech2;
	public:
		Persona(string,int,int,int,int,int,int);
		void mostrar();
};
