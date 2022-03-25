#include <stdio.h>

int main() {

    char digito;
    printf("Ingrese el digito:\n");
    scanf("%c", &digito);
    
    /*if (digito == '0' || digito == '1' || digito == '2') {
    
        printf("Es un numero\n");
    }
    */

    if (digito >= '0' && digito <= '2') {
        printf("Es un numero\n");
    }
    else if ((digito >= 'a' && digito <= 'z') || digito >= 'A' && digito <= 'Z') {
        printf("Es una letra\n");
    }
    
    return 0;
}