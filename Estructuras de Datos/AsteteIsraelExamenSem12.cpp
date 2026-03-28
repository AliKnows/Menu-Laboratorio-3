//elabore un programa que registre el pago por
//concepto de: matriculas, mensualidades y emisión de certificados

#include <iostream>
using namespace std;


int main() {
    int opcion;
    double totalMatricula = 0.0, totalMensualidad = 0.0, totalCertificado = 0.0;
    int cantidadMatricula = 0, cantidadMensualidad = 0, cantidadCertificado = 0;
    
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
                totalMatricula += 50;
                cantidadMatricula++;
                cout << "Matricula registrada. Total recaudado por matricula: S/. " << totalMatricula << endl;
                break;
            case 2:
                totalMensualidad += 150;
                cantidadMensualidad++;
                cout << "Mensualidad registrada. Total recaudado por mensualidad: S/. " << totalMensualidad << endl;
                break;
            case 3:
                totalCertificado += 20;
                cantidadCertificado++;
                cout << "Certificado registrado. Total recaudado por certificados: S/. " << totalCertificado << endl;
                break;
            case 4:
                cout << "\nREPORTE\n";
                cout << "================================ \n";
                cout << "Matriculas registradas: " << cantidadMatricula << ", Total: S/. " << totalMatricula << endl;
                cout << "Mensualidades registradas: " << cantidadMensualidad << ", Total: S/. " << totalMensualidad << endl;
                cout << "Certificados registrados: " << cantidadCertificado << ", Total: S/. " << totalCertificado << endl;
                cout << "================================ \n";
                break;
            case 5:
                cout>>"Saliendo..";
                
                break;
            default:
                cout << "Opcion no valida\n";
        }
    } while(opcion =!5);
    
    return 0;
}
