#include <stdio.h>
#include "algoritmos.h"
#include "metodos.h"

int main(){

	/* Pruebas */

//	float resultado1 = algoritmo1(0.0002);
//	printf("algoritmo1: %0.7f\n",resultado1);
	/*144663.7286826371214115435508240872974645015486397947797058...*/

//	float resultado2 = algoritmo2(0.0002);
//	printf("algoritmo2: %0.7f\n",resultado2);
	/*0.000663710...*/

//	float resultado3 = algoritmo3(0.0002);
//	printf("algoritmo3: %0.7f\n",resultado3);
	/*0.000055336271517362878588456449175912702535498451360205220...*/

//	float resultado4 = algoritmo4(0.0002);
//	printf("algoritmo4: %0.7f\n",resultado4);
	/*0.00112764...*/
	
//	float resultado5 = algoritmo5(0.0002);
//	printf("algoritmo5: %0.7f\n",resultado5);
	/**/

	float semilla = regula_falsi(0.001, 0.009, 0.001, funcion);	
	//printf("Semilla: %0.7f\n\n", semilla);

	printf(".:: ALGORITMOS PUNTO FIJO CON SEMILLA=%0.7f ::.\n\n", semilla);
	float resultado1 = punto_fijo(semilla, 0.000005, algoritmo1);
	printf("Algoritmo1: %f\n\n", resultado1);

	float resultado2 = punto_fijo(semilla, 0.000005, algoritmo2);
	printf("Algoritmo2: %0.7f\n\n", resultado2);

	float resultado3 = punto_fijo(semilla, 0.000005, algoritmo3);
	printf("Algoritmo3: %0.7f\n\n", resultado3);

	float resultado4 = punto_fijo(semilla, 0.000005, algoritmo4);
	printf("Algoritmo4: %0.7f\n\n", resultado4);

	float resultado5 = punto_fijo(semilla, 0.000005, algoritmo5);
	printf("Algoritmo5: %0.7f\n\n", resultado5);

	return 0;
}
