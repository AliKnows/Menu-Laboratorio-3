#include <iostream>

using namespace std;
int main() {
	
	 char escala;
	 int alumnos ;
	int importe;
	float alumnosA ,alumnosB, alumnosC;
	 
	 while(true){
	 	while (true) {
	 	
	cout<<"Consejo: Ingrese los numeros correspondientes"<<endl;
	 cout<<"MENU DE OPCIONES \n 1. Escala A \n 2. Escala B \n 3. Escala C \n 4. Reportes  \n 5. Salir \n ";cin>>escala;
	  
	  
	
      if (escala != '1' && escala != '2' && escala != '3') {
      cout << "ERROR: Escala no valida. Intente nuevamente." << endl;
    } else {
      
      switch (escala) {
        case '1':
        alumnos = alumnos +1;
        alumnosA = alumnos;
        importe = 20 ;
        importe ++;
        
        
        
        cout << "Numero de alumnos en la escala A: " << alumnos << endl;
         cout << "Importe recaudado por la escala A: " << importe << endl;
        
        
          break;
        case '2':
    	alumnos = alumnos +1;
        alumnosB = alumnos;
    	
		importe = 30;
        importe ++;
        
         cout << "Numero de alumnos en la escala A: " << alumnos << endl;
         cout << "Importe recaudado por la escala A: " << importe << endl;
         
          break;
        case '3':
        
		alumnos = alumnos +1;
        alumnosC= alumnos;
		
		importe = 50; 
        importe ++; 
        
        cout << "Numero de alumnos en la escala A: " << alumnos << endl;
        cout << "Importe recaudado por la escala A: " << importe << endl;
          break;
  
		case'4':
		int totalAlumnos = alumnosA+alumnosB+alumnosC;
	cout << "Resumen de matrículas:" << endl;
   cout << "Numero de alumnos en la escala A: " << alumnosA << endl;
   cout << "Numero de alumnos en la escala B: " << alumnosB << endl;
   cout << "Numero de alumnos en la escala C: " << alumnosC << endl;
   cout << "Total de alumnos matriculados: " << totalAlumnos << endl;
 
			
			
			
			
        break;
      
//	  	case'5':
//	  		
//	  	false;		
//	  		
//	  		
//	  	break;
	  
	  
	  }
      break;
           }
               }
	 	
	 	
	 }
	 
               
    
}