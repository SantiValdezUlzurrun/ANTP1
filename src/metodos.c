#include "metodos.h"


float regula_falsi(float inicio, float final, float cota_error,float (*funcion)(float)){
	float cota_error_actual=10000;
	float m_anterior=0;
	float m_actual=0;

	while(cota_error_actual > cota_error){

		m_actual=inicio -(final- inicio)*(funcion(inicio)/(funcion(final)-funcion(inicio)));
		cota_error_actual=fabsl(m_actual - m_anterior);

		if(funcion(inicio)*funcion(m_actual) <0 ){
			final=m_actual;
		}
		if(funcion(final)*funcion(m_actual) <0){
			inicio=m_actual;
		}
		m_anterior=m_actual;
	}
	return m_actual;
}

float punto_fijo(float semilla, float cota_error,float (*funcion)(float)){
	float cota_error_actual=10000;
	float m_actual=funcion(semilla);
	semilla=m_actual;

	while(cota_error_actual > cota_error){
		printf("X=%0.7f",semilla);
		m_actual=funcion(semilla);
		cota_error_actual=fabsl(m_actual-semilla);
		semilla=m_actual;
		printf("   Cota de error= %0.7f\n", cota_error_actual);
	}
	return m_actual;
}

