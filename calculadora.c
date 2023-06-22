#include <stdio.h>
#include "operaciones.h"

int main(){
   
    float num1, num2;
    float suma=0;
    float resta=0;
    float multiplicacion=0;
    float division=0;
    printf("INGRESE EL PRIMER NUMERO:");
    scanf("%f", &num1);
    printf("INGRESE EL SEGUNDO NUMERO: ");
    scanf("%f", &num2);

    sumar(&num1, &num2, &suma);
    printf("Suma: %f\n", suma);

    restar(&num1, &num2, &resta);
    printf("Resta: %f\n", resta);

    multiplicar( &num1,  &num2, &multiplicacion);
    printf("Multiplicación: %f\n", multiplicacion);

    dividir( &num1,  &num2, &division);
    printf("División: %.2f\n", division);

    return 0;
}



    
    

