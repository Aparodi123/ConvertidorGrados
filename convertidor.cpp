#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
/*
///
[] Crear una varible tipo int para guardar el dato ingresado por el usuario de los grados a convertir.
[] Creo una variable tipo int para guardar el resultado dado por la convertibilidad.
[] Inicializo la variable.
[] Pedir al usuario el ingreso de un numero que equivale a los grados a convertir.
[] Crear funcion que multiplique por 1.8 el valor ingresado por el usuario y al resultado sumarle 32.
[] Mostrar el resultado por consola.
*/


using namespace std;

int main(){

int G = 0;
int GF = 0;
cout << "Ingrese grados en Celsius: ";
cin >> G;

GF = 1.8*G+32;

cout << G << " Equivale a: " << GF << " Grados Fahrenheit";
return 0;
}
