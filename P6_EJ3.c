/*3. Crear una función que devuelva la primera letra de una cadena de texto.*/

#include <stdio.h>

char obtener_primera_letra(char* cadena) 
{
    return cadena[0];
}

int main() 
{
    char cadena[100]; 

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    char primera_letra = obtener_primera_letra(cadena);

    printf("La primera letra de la palabra es: %c\n", primera_letra);

    return 0;
}

