#include <stdio.h>
#include "algoritmos.h"

int main(){

	/* Pruebas */
	float resultado1 = algoritmo1(0.0002);
	printf("algoritmo1: %0.7f\n",resultado1);
	/*144663.7286826371214115435508240872974645015486397947797058...*/

	float resultado2 = algoritmo2(0.0002);
	printf("algoritmo2: %0.7f\n",resultado2);
	/*0.000663710...*/
	
	return 0;
}
