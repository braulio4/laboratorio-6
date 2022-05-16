
//4 . Implemente una aplicación con clases donde una clase contiene un arreglo en el que 
//se pueden almacenar como máximo 5 datos. Debe tener un nuevo dato para 
//almacenarlo, debe existir un método que verifique que el arreglo tenga espacio 
//disponible para guardar el dato. En caso contrario se debe mostrar un mensaje 
//indicando que el arreglo está lleno. Asimismo, debe tener un método para retirar un 
//dato del arreglo, este método debe verificar que, si haya algo para sacar del arreglo, 
//es decir que el arreglo no vaya a estar vacío, en cuyo caso debe desplegar un mensaje 
//diciendo que no hay nada para sacar de arreglo.

#include<iostream>
#include<conio.h>
#include<time.h>
#include"ingresar.h"
using namespace std;


Lista::Lista(int _array[]){
	for(int i = 0; i < 5; ++i){
		array[i] = _array[i];
	}
}

void Lista::espacio_disponible(){
	for(int i=0;i<5;i++){
		if(array[i]==0){
			cout<<"hay espacio ingrese el dato  ["<<i+1<<"]: ";
			cin>>array[i];
		}
		else{
			cout<<"arreglo ocupado ["<<i<<"]"<<endl;
		}
		
		
	}
}

void Lista::mostrar(){
	cout<<endl<<"el arreglo es el siguiente: "<<endl<<endl;
	for(int i=0;i<5;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void Lista::retirar_dato(){
	int opcion;
	cout<<"cual es la posicion que desea eliminar?"; cin>>opcion;
	if(opcion<6){
		if(array[opcion]==0){
		cout<<"esa posicion ya esta eliminada"<<endl;
		}
		else{
			array[opcion]=0;
		cout<<"posicion eliminada"<<endl;
		}
		
	}
	else{
		cout<<"esa posicion no existe"<<endl;
	}
	
	
}

int main(){
	int array[5]={0,0,0,0,0};
	Lista p1=Lista(array);
	int op;
	cout<<"             MENU"<<endl;
	cout<<"1) insertar"<<endl;
	cout<<"2) mostrar"<<endl;
	cout<<"3) eliminar"<<endl;
	cout<<"4) salir"<<endl;
	cout<<"elige una opcion: "<<endl;

	do{
        cin>>op;
        switch(op){
		case 1:
			p1.espacio_disponible(); 
			cout<<endl<<"ingrese una opcion: "<<endl; 
			break;
		case 2:
			p1.mostrar(); 
			cout<<endl<<"ingrese una opcion: "<<endl; 
			break;
		case 3:
			p1.retirar_dato(); 
			cout<<endl<<"ingrese una opcion: "<<endl; 
			break;
		case 4:
			cout<<endl<<"gracias por usar el programa"<<endl; break;
	}
    }while(op!=4);  
	return 0;
}