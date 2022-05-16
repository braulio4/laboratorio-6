#include<iostream>
#include"rectangulo.h"
#include<conio.h>
#include<string.h>
using namespace std;

Rectangulo::Rectangulo(int _lado, int _ancho){
	lado=_lado;
	ancho=_ancho;
}

void Rectangulo::perimetro(){
	int perimetro;
	perimetro=(2*lado)+(2*ancho);
	cout<<"el perimetro del rectangulo es: "<<perimetro<<endl;
}

void Rectangulo::area(){
	int area;
	area=lado*ancho;
	cout<<"el area del rectangulo es: "<<area<<endl;
}

int main(){
	int l,a;
	cout<<"ingrese lado y ancho"; cin>>l>>a;
	Rectangulo p1=Rectangulo(l,a);
	p1.area();
	p1.perimetro();
	getch();
	return 0;
}