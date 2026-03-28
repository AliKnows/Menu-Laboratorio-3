#include <iostream>

using namespace std;
int main (){
	//variables
	int m,n, resto; //m:numerador; n:denominador 
	
	//leer datos
	cout<<"leer m: "; cin>> m;
	cout<<"leer n: "; cin>> n; 
	 
	 while(m%n >0){
	 	
	 	resto = m%n;
	 	
	 	m = n ;
	 	n = resto;
	 }
	 	cout<<"El M C D es:" << n;	 	
	 	
	
	
	
}