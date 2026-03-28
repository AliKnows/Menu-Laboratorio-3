#include <iostream>

using namespace std;
int main(){
	
	int k,n, s;
	
	k = 0; // es tipico inicializar el acumulador con 0;
	s = 0;
	cout<<"Ingrese un "; cin>>n;
	
	while(k<n){
		
		//contador  = contador + constante
		
		k = k + 1; //
		//Actualiza el acumulador
		//acumulador = acumulador +variable;
		 
		s = s + k ;
		
	cout<< k;
	}
	
	cout<<"\n la suma de los naturales es :"<<s << endl; 
	
}