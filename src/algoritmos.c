#include "algoritmos.h"
#include "global.h"

/* Algoritmo iterativo 1  */
float algoritmo1(float Xk){

	float montoDeLaCuenta = (CANTIDAD_DEPOSITADA / Xk) * (powf(1 + Xk, PERIODO_DE_DEPOSITO) - 1);
	return  Xk - (montoDeLaCuenta - MONTO_DESEADO);
}
