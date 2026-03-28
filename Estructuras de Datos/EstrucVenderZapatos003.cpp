//Variables globales
//Calcular total de ventas de zapatos de una marca y modelo dado
#include <iostream>
using namespace std;

//Variables Globales
float Total = 0 ;

void Vender(){
	Total = Total +150;
	
}
void Reporte(){
	cout<<"Total Vendido: S/."<<Total<<endl;
	
}

int main(){
	int opcion;
do{
	cout<<"MENU \n";
	cout<< "1. Vender Zapatos () \n";
	cout<<"2.\n";
	cout<<"3.\n";
	cout<<"INGRESAR OPCION: .\n";
	cin>> opcion;
	
	//lectura de la opcion
	
	if(opcion ==1)
	Vender();
	else if(opcion == 2)
	Reporte();
		
}while(opcion<3);
	
	
	
	
}