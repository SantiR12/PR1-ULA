// variables.c - Demostración del uso de las variables básicas

#include <stdio.h>

int main() {

    /* Respectivamente las siguientes variables son de tipo entero,
       carácter, cadena, flotante simple (decimal) y flotante doble */ 
    
    int edad = 21;
    char letra = 'P';
    char nombre[] = "Santiago Rafael Gonzalez";
    float altura = 1.62;
    double peso = 52.1; // Las variables de tipo double tienen mas precisión

    // se imprimen los datos en pantalla con el formato correcto

    printf("Hola, mi nombre es %s %c.\nTengo %d años, mido %.2fm y peso %.3lfkg\n\n", nombre, letra, edad, altura, peso);

    return 0;

}
