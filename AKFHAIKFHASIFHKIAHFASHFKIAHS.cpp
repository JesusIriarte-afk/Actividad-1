//Realizar un programa que muestre en pantalla las raices de una ecuacion cuadratica cuyos coeficientes sean ingresados por teclado
//pues, creo que lo principla seria que falta por terminar

#include <iostream>

#include <cmath>
using namespace std;
int main(){
	
	float a;
	float b;
	float c;
	float potenciab;
	float resultado;
	
	cout <<"Escriba un numero para a ";
	cin >> a;
	cout <<"Escriba un numero para b ";
	cin >> b;
	cout <<"Escriba un numero para c ";
	cin >> c;
	
	float calculo1 = ( a * c);
	
	potenciab = pow ( b, 2);
	
	float calculo2 = ( 4 * calculo1);
	
	
	float calculo3 = ( potenciab + calculo2);
	
	cout << "a " <<  calculo3 << endl;
	
	
	return 0;
}
