//realizar un programa que determine el precio del billete de ida y vuelta en
//ferrocarril, sabiendo que si el numero de dias de estancia es superior a 7
//y la distancia superior a 800km el billete tiene una reduccion del 30%.
// el programa debe permitir calular el precio mas de una vez sin cerrarse.
#include <iostream>
using namespace std;
int main (){
	float billeteiyv;
	float diasdeestancia;
	float distancia;
	float reduccion;
// precio billete 2lucas por kilometro
	cout <<"Escriba sus dias de estancia ";
	cin >> diasdeestancia;
	cout <<"Escriba cuanta distancia va a recorrer ";
	cin >> distancia;



float precio1 = ( distancia * 2);

if (( distancia >= 800) && ( diasdeestancia >= 7 )) {
	cout << "para ti aplica un descuento" << endl;
	
} else {
	
	cout <<"te toca precio completo " << endl;
}
float preciocondescuento;

cout << " su precio es el siguiente" << precio1 << endl;




return 0;
}


//el resultado en el que se aplica el descuento no se ve ningun cambio
//osea, el resultado no cambia del precio original.

