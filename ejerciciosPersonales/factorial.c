// factorial.c - Recibe un número del usuario y se obtiene su factorial mediante una función

#include <stdio.h>

// Esta es una función int, por ende retorna algo a diferencia de las funciones void

int factorial(int numero) {

    /* Un factorial es lo que resulta de multiplicar un numero dado por todos
       los números que lo anteceden, de manera que el factorial de 4 seria el
       resultado de 4 x 3 x 2 x 1 */

    // Se crea una variable para la operación
    int x = numero - 1;

    // Se crea un ciclo for para repetir las veces necesarias la multiplicación
    for (int i = x; i > 0; i--) {
        
        numero = numero * x;

        // esto resta el valor de la variable x por -1
        x--;
    }
    
    // retorna la variable numero despues de obtener el resultado en el ciclo
    return numero;
}

int main() {
    
    // Inicializa una variable
    int numUsuario;

    printf("Por favor introduzca un numero entero: ");

    // Recibe la entrada del usuario
    scanf("%d", &numUsuario);

    /* se crea una nueva variable tipo entero que llama a la función factorial usando como argumento el numero 
       que el usuario escribió*/
    int resultado = factorial(numUsuario);

    printf("Resultado = %d\n", resultado);

    return 0;
}