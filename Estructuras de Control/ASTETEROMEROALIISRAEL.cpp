#include <iostream>

using namespace std;
int main(){
	float cuentaSoles, cambio, bonoS,bonoD;
	int option;
	double total;
	cout<<"Ingrese el monto de apertura en soles: "; cin>> cuentaSoles;
	cout<<"Ingrese el tipo de cambio : "; cin>> cambio;
	
	if(cuentaSoles>=50 && cambio > 0){
		
		
		
	cout<<"MENU \n  [1.] Procesar \n [2.]Salir  "<<endl; cin>>option;
	switch(option){
		
		case 1:
			
		if(cuentaSoles>=50 && cuentaSoles <1000){
			bonoD = 100;
			bonoS = cambio * bonoD;
			total= cuentaSoles + bonoS;
			
			cout<<"Categoria E"<<endl;
			cout<<"Bono Dolares: "<<bonoD<<endl;
			cout<<"Bono en Soles "<<bonoS<<endl;
			cout<<"Monto Total en la cuenta es: "<<total<<"Soles"<<endl;
			
			}else if(cuentaSoles>=1000 && cuentaSoles <5000){
			bonoD = 200;
			bonoS = cambio * bonoD;
			total= cuentaSoles + bonoS;
			cout<<"Categoria D"<<endl;
			cout<<"Bono Dolares: "<<bonoD<<endl;
			cout<<"Bono en Soles "<<bonoS<<endl;
			cout<<"Monto Total en la cuenta es: "<<total<<"Soles"<<endl;
			
			
			
			
		}else if(cuentaSoles>=5000 && cuentaSoles <7000){
			bonoD = 300;
			bonoS = cambio * bonoD;
			total= cuentaSoles + bonoS;
			
			cout<<"Categoria C"<<endl;
			cout<<"Bono Dolares: "<<bonoD<<endl;
			cout<<"Bono en Soles "<<bonoS<<endl;
			cout<<"Monto Total en la cuenta es: "<<total<<"Soles"<<endl;
			
		}else if(cuentaSoles>=7000 && cuentaSoles <10000){
			bonoD = 400;
			bonoS = cambio * bonoD;
			total= cuentaSoles + bonoS;
			
			cout<<"Categoria B"<<endl;
			cout<<"Bono Dolares: "<<bonoD<<endl;		
			cout<<"Bono en Soles "<<bonoS<<endl;
			cout<<"Monto Total en la cuenta es: "<<total<<"Soles"<<endl;
			
			
		}else{
			
			bonoD = 500;
			bonoS = cambio * bonoD;
			total= cuentaSoles + bonoS;
			
			cout<<"Categoria A"<<endl;
			cout<<"Bono Dolares: "<<bonoD<<endl;
			cout<<"Bono en Soles "<<bonoS<<endl;
			cout<<"Monto Total en la cuenta es: "<<total<<"Soles"<<endl;
	

		}
		
		
		
		
		
		
		
		
		break; 
		
		case 2:
			
			cout<<"Presione ENTER PARA SALIR";
			
		break;
	}
	
		
		
		
	}else{
	cout<<"ERROR: Monto de Cuenta No Valido";
	}
	
	
	
	
}