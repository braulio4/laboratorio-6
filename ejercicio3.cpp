#include<iostream>
#include"matri.h"
#include<conio.h>
#include<string.h>
using namespace std;


Persona::Persona(string _nombre,int _anio1,int _mes1,int _fech1,int _anio2,int _mes2,int _fech2){
	nombre=_nombre;
	anio1=_anio1;
	mes1=_mes1;
	fech1=_fech1;
	anio2=_anio2;
	mes2=_mes2;
	fech2=_fech2;
}

void Persona::mostrar(){
	int fech,mes;
    if (fech1<fech2){  
        fech1=fech1+30; 
        mes1=mes1-1; 
        fech=fech1-fech2;
    }
    else{
        fech=fech1-fech2;     	
	}
 
    if( mes1<mes2){  
        mes1=mes1+12;
        anio1=anio1-1;
        mes=mes1-mes2;
    }
    
    else{
    	mes=mes1-mes2;
	}
	cout<<endl<<endl;
    cout<<"su nombre es: "<<nombre<<endl;
    cout<<"\ntu tienes:\n";
    cout<<" Edad: "<<anio1-anio2<<endl; 
    cout<<" Mes: "<<mes<<endl;
    cout<<" Dia: "<<fech<<endl;
 
}

int main(){
	int anio1,mes1,fech1;
    int anio2,mes2,fech2;
    string name;
    cout<<"ingrese su nombre: "; cin>>name;
    cout<<"ponga Anio actual: "; cin>>anio1;
    cout<<"ponga Mes actual: "; cin>>mes1;
    cout<<"ponga dia actual: "; cin>>fech1;
 
    cout<<"\nponga Anio Nacimiento: ";  cin>>anio2;
    cout<<"ponga Mes de Nacimiento: ";  cin>>mes2;
    cout<<"ponga dia de Nacimiento: ";  cin>>fech2;
    
    Persona p1=Persona(name,anio1,mes1,fech1,anio2,mes2,fech2);
    p1.mostrar();
	getch();
	return 0;
}