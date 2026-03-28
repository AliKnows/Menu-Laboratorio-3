// Estructuras de datos
// Programa que determine la diferencia de 2 horas
// H1: 12:45:13          H2: 15:23:12
#include <iostream>
using namespace std;

// Definir la estructura de datos para almancer Hora
// HORA: hora:minuto:segundo
// Sintaxis:

// 		struct Nombre{
//   		variables
//		}

struct TipoHora{
	int Hora;
	int Minuto;
	int Segundo;
};

// Leer un valor entero comprendido entre min y max
int LeerInt(string msg,int min, int max){
	int valor;
	do{
		cout << msg << "[" << min << " ..";
struct TipoHora{
	int Hora;
	int Minuto;
	int Segundo;
};

// Leer un valor entero comprendido entre min y max
int LeerInt(string msg,int min, int max){
	int valor;
	do{
		cout << msg << "[" << min << " ... " << max << "]: ";
		cin >> valor;
		if (valor < min || valor > max)
			cout << "Valor fuera de rango....\n";
	}while(valor < min  || valor > max);
	return valor;
}
// Leer hora
TipoHora LeerHora(){
	TipoHora H;
	H.Hora = LeerInt("Ingrese hora: ", 0, 23);
	H.Minuto = LeerInt("Ingrese minuto: ", 0, 59);
	H.Segundo = LeerInt("Ingrese segundo: ", 0, 59);
	return H;
}

int DiferenciaHoras_Seg(TipoHora H1, TipoHora H2){
	int diferencia;
	diferencia = (H2.Hora*3600+H2.Minuto*60+H2.Segundo) - (H1.Hora*3600+H1.Minuto*60+H1.Segundo);
	return diferencia;
}
int main(){
	// variables
	TipoHora h1, h2;
	// Leer datos
	h1 = LeerHora();
	h2 = LeerHora();
	// Calcular diferencia entre 2 horas
	int difer = DiferenciaHoras_Seg(h1, h2);
	// mostrar resultados
	cout << difer;
}