//programa para repartir pizzas
//indicar el n° de perosnas y n° de pizass
//retornar el n° de pizzas por persona y cuantas sobran
//las pizzas se parten en 8 porciones
#include <iostream>

int main(){
	int npersonas, pizzas, totalPiz, ntperson, ntsobrantes;
	
	cout<< "Bienvenido a Telepizza.Cuantos son? "; cin>>npersonas;	
	cout<<"Cuantas pizzas desea? : ";cin>>pizzas;
	
	
	totalPiz= pizzas * 8;
	ntperson = totalPiz/ npersonas;
	
	ntsobrantes = totalPiz - ntperson;
	
	cout<<"El numero de pizzas por "<<nperosonas << " es de "<< ntperson;
	cout<<"El numero de Trozos de pizza sobrantes es de "<<ntsobrantes;
	
	
	
	
	return 0;
}
