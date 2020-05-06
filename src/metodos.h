#ifndef METODOS_H_
#define METODOS_H_

#include <stdio.h>
#include <math.h>


float regula_falsi(float inicio, float final, float cota_error,float (*funcion)(float));
float punto_fijo(float semilla, float cota_error,float (*funcion)(float));

#endif /* METODOS_H_ */
