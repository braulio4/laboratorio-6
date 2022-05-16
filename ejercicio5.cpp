#include<iostream>
#include<conio.h>
#include<time.h>
#include"matriz.h"
using namespace std;



Matriz::Matriz(int _num,int _buscar){
	num=_num;
	buscar=_buscar;
}


void Matriz::busqueda(){
	int matriz[num][num];
	srand(time(NULL));
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=1+rand()%(10-1);
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	int s=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(buscar==matriz[i][j]){
				cout<<"se encontro el dato que buscabas estaba en la posicion ["<<i<<"]["<<j<<"]"<<endl;
				s++;
			}
		}
	}
	if(s==0){
		cout<<"no se encontro el dato que buscabas"<<endl;
	}
}

int main(){
	int bus,num;
	cout<<"ingrese el dato que esta buscando: "; cin>>bus;
	Matriz p1=Matriz(3,num);
	p1.busqueda();           
	getch();
	return 0;
}