#include<iostream>
using namespace std;

class Alumno{
	private:
		string cui;
		string nombre;
		int nota1,nota2,nota3;
	public:
		Alumno(string,string,int,int,int);
		void imprimir();
};