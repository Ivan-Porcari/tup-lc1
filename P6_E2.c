/*Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.*/

#include <stdio.h>
#include <stdlib.h>

int calcular_signo(float numero)
{    
    int resultado;

    if (numero < 0) 
    {
        resultado = -1;
    }
    else if (numero == 0)
    {
        resultado = 0;
    }
    else
    {
        resultado = 1;
    }
    
    return resultado;

}


int main(){

    float numero;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%f", &numero);

    resultado = calcular_signo(numero);

    printf("%d", resultado);

    return 0;
}