#include <iostream>

using namespace std;

int main(){
	int n, k; //n:numero a evaluar; k el contador
	
	cout<<"Ingrese n: "; cin>>n;
	
	k=2;
	
	while(n % k > 0 ){
		
		k = k + 1;
	}
	
	if(k == n){
		
		cout<<"El numero "<<n<< " es primo";
	}else{
		cout<<"El numero "<<n<< " No es primo";
	}
	
	
}