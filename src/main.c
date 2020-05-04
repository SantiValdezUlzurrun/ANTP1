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

	float resultado3 = algoritmo3(0.0002);
	printf("algoritmo3: %0.7f\n",resultado3);
	/*0.000055336271517362878588456449175912702535498451360205220...*/

	float resultado4 = algoritmo4(0.0002);
	printf("algoritmo3: %0.7f\n",resultado4);
	/*0.00112764...*/
	

	return 0;
}
