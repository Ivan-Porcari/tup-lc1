/*4. Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
número primo o 0 en caso contrario.*/


#include <stdio.h>

int es_primo(int numero) 
{
    if (numero <= 1) 
    {
        return 0;  // Los números menores o iguales a 1 no son primos
    }

    // Verificar si el número es divisible por algún número desde 2 hasta su mitad
    for (int i = 2; i <= numero / 2; i++) 
    {
        if (numero % i == 0) 
        {
            return 0;  // El número es divisible, por lo tanto no es primo
        }
    }

    return 1;  // El número es primo
}

int main() 
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (es_primo(numero))
    {
        printf("%d es un numero primo\n", numero);
    } 
    else 
    {
        printf("%d no es un numero primo\n", numero);
    }

    return 0;
}