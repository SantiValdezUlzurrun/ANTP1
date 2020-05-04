#include "algoritmos.h"
#include "global.h"

/* Algoritmo iterativo 1  */
float algoritmo1(float Xk){

	float montoDeLaCuenta = (CANTIDAD_DEPOSITADA / Xk) * (powf(1 + Xk, PERIODO_DE_DEPOSITO) - 1);
	return  Xk - (montoDeLaCuenta - MONTO_DESEADO);
}

float algoritmo2(float Xk){

	float radicando = MONTO_DESEADO * (Xk / CANTIDAD_DEPOSITADA) + 1;
	return powf(radicando, 1.0 / PERIODO_DE_DEPOSITO) - 1;
}

float algoritmo3(float Xk){

	return (CANTIDAD_DEPOSITADA / MONTO_DESEADO) * (powf(1 + Xk, PERIODO_DE_DEPOSITO) - 1);
}

float algoritmo4(float Xk){
	
	float dividendo = MONTO_DESEADO * (Xk / CANTIDAD_DEPOSITADA) + 1;
	float divisor = powf(1 + Xk, PERIODO_DE_DEPOSITO / 2);
	return powf(dividendo/divisor, 1.0 / (PERIODO_DE_DEPOSITO / 2)) - 1;
}
