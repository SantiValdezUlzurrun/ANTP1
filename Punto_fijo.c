#include <stdio.h>
#include <math.h>



//(x-((x*x*x)+4*(x*x)-10)/(3*(x*x)+8*x))
//(sqrt(10-(x*x*x))*0.5)
double funcion(double x){
	return (x-((x*x*x)+4*(x*x)-10)/(3*(x*x)+8*x));
}

double regula_falsi(double inicio, double final, double cota_error,double (*funcion)(double)){
	double cota_error_actual=10000;
	double m_anterior=0;
	double m_actual=0;

	while(cota_error_actual > cota_error){

		m_actual=inicio -(final- inicio)*(funcion(inicio)/(funcion(final)-funcion(inicio)));
		cota_error_actual=fabs(m_actual - m_anterior);

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
double punto_fijo(double semilla, double cota_error,double (*funcion)(double)){
	double cota_error_actual=10000;
	double m_actual=funcion(semilla);
	semilla=m_actual;

	while(cota_error_actual > cota_error){
		printf("X=%0.15f",semilla);
		m_actual=funcion(semilla);
		cota_error_actual=fabs(m_actual-semilla);
		semilla=m_actual;
		printf("   Cota de error= %0.15f\n", cota_error_actual);
	}
	return m_actual;
}

int main(){

	printf("%f\n",regula_falsi(1,2,0.00001, funcion));
	printf("Solucion encontrada con punto fijo:= %0.15f\n",punto_fijo(1.5,0.00000000000001, funcion));
	return 0;
}