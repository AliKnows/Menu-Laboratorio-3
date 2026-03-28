//elabore un programa que registre el pago por
//concepto de: matriculas, mensualidades y emisión de certificados
// 
#include <iostream>
using namespace std;

// Variables globales
double totalMatricula = 0.0, totalMensualidad = 0.0, totalCertificado = 0.0;
int cantidadMatricula = 0, cantidadMensualidad = 0, cantidadCertificado = 0;

  void registrarMatricula() {
    totalMatricula += 50;
    cantidadMatricula++;
    cout << "Matricula" <<cantidadMatricula<< totalMatricula << endl;
}
 		void registrarMensualidad() {
    totalMensualidad += 150;
    cantidadMensualidad++;
    cout << "Mensualidad " << cantidadMensualidad<< totalMensualidad << endl;
}

void registrarCertificado() {
    totalCertificado += 20;
    cantidadCertificado++;
    cout << "Certificado  " << cantidadCertificado<< totalCertificado << endl;
}

void mostrarReporte() {
    cout << "\n Nro   CONCEPTO   CANT.  IMPORTE \n";
    cout << "=================================================== \n";
    cout << "1. Matriculas " << cantidadMatricula << " S/. " <<  totalMatricula << endl;
    cout << "2. Mensualidades" << cantidadMensualidad << " S/.   " <<  totalMensualidad << endl;
    cout << "3. Certificados " << cantidadCertificado << " S/.   " <<  totalCertificado << endl;
    cout << "=================================================== \n";
    
    
}

int main() {
    int opcion;
    
    do {
        cout << "MENU DE OPCIONES\n";
        cout << "===========================\n";
        cout << "1. Registra matricula (S/. 50)\n";
        cout << "2. Registra mensualidad (S/. 150)\n";
        cout << "3. Certificado de estudios (S/. 20)\n";
        cout << "4. Reporte\n";
        cout << "5. Salir\n";
        cout << "Ingrese opcion: [1 ... 5]: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                registrarMatricula();
                break;
            case 2:
                registrarMensualidad();
                break;
            case 3:
                registrarCertificado();
                break;
            case 4:
             	//cout<<"Nro    CONCEPTO     CANT.    IMPORTE";
               	//cout << "Matriculas registradas: " << cantidadMatricula << ", Total: S/. " << totalMatricula << endl;
                //cout << "Mensualidades registradas: " << cantidadMensualidad << ", Total: S/. " << totalMensualidad << endl;
               //cout << "Certificados registrados: " << 
                mostrarReporte();
                break;
            case 5:
                cout << "Saliendo \n";
                break;
            default:
                cout << "Error: Opcion No valida \n";
        }
    } while(opcion != 5);
    
    return 0;
}
