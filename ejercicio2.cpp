#include<iostream>
#include<conio.h>
#include<string.h>
#include"promedio.h"
using namespace std;


Alumno::Alumno(string _cui,string _nombre,int _nota1, int _nota2,int _nota3){
	cui=_cui;
	nombre=_nombre;
	nota1=_nota1;
	nota2=_nota2;
	nota3=_nota3;
}

void Alumno::imprimir(){
	int promedio;
	promedio=(nota1+nota2+nota3)/3;
	cout<<"el alumno es: "<<nombre<<endl;
	cout<<"su cui es: "<<cui<<endl;
	cout<<"su promedio es: "<<promedio<<endl;
	if(promedio>=10.5){
		cout<<"el alumno aprobo con "<<promedio<<" de nota"<<endl;
	}
	else{
		cout<<"el alumno desaprobo con "<<promedio<<" de nota"<<endl;
	}
	
}


int main(){
	string nom,cuii;
	int no1,no2,no3;
	cout<<"ingrese su nombre: "; cin>>nom;
	cout<<"ingrese su cui: "; cin>>cuii;
	cout<<"ingrese su nota1: "; cin>>no1;
	cout<<"ingrese su nota2: "; cin>>no2;
	cout<<"ingrese su nota3: "; cin>>no3;
	Alumno p1=Alumno(cuii,nom,no1,no2,no3);
	p1.imprimir();
	getch();
	return 0;
}