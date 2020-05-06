#include "algoritmos.h"
#include "global.h"

float funcion(float Xo){
	
	return (CANTIDAD_DEPOSITADA/Xo) * (powf(1+Xo, PERIODO_DE_DEPOSITO) - 1) - MONTO_DESEADO;
}

/* Algoritmo iterativo 1  */
float algoritmo1(float Xk){

	float monto_de_la_cuenta = (CANTIDAD_DEPOSITADA / Xk) * (powf(1 + Xk, PERIODO_DE_DEPOSITO) - 1);
	return  Xk - (monto_de_la_cuenta - MONTO_DESEADO);
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

float algoritmo5(float Xk){


	float dividendo = ((CANTIDAD_DEPOSITADA / Xk) * (powf(1 + Xk, PERIODO_DE_DEPOSITO) - 1)) - MONTO_DESEADO;
	float divisor1 = (((-1 * CANTIDAD_DEPOSITADA) / powf(Xk, 2)) * (powf(1 + Xk, PERIODO_DE_DEPOSITO) - 1)); 
	float divisor2 = ((CANTIDAD_DEPOSITADA / Xk) * PERIODO_DE_DEPOSITO * (powf(1 + Xk, PERIODO_DE_DEPOSITO - 1))); 
	

	float cociente = dividendo / (divisor1 + divisor2);

	return Xk - cociente;
}
