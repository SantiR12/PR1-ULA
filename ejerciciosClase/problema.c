#include <stdio.h>

int main() {
    
    // Hacer un programa que dada una hora (hh, mm, ss).
    // Determine la hora luego de 15 segundos.
    
    int hora;
    int minutos;
    int segundos;

    // Se va a imprimir la hora en formato de 24 horas

    printf("Introduzca una hora:\n");
    scanf("%d", &hora);
    printf("Introduzca los minutos:\n");
    scanf("%d", &minutos);
    printf("Introduzca los segundos:\n");
    scanf("%d", &segundos);
    
    if ((hora >= 0 && hora < 24) && (minutos >= 0 && minutos < 60) && (segundos >= 0 && segundos < 60)) {
        printf("La hora actual en formato de 24 horas es: %.2d:%.2d:%.2d\n", hora, minutos, segundos);
        
        segundos = segundos + 15;
    
        if (segundos > 59) {
            minutos+= 1;
            segundos-= 60;
            if (segundos < 0) {
                segundos*= -1;
            }
        }
        if (minutos > 59) {
            hora+= 1;
            minutos-= 60;
            if (minutos < 0) {
                minutos*= -1;
            }
        }
        if (hora > 23) {
            hora%= 24;
        }
        
        printf("La hora en 15 segundos será: %.2d:%.2d:%.2d\n", hora, minutos, segundos);
    
        if (hora >= 0 && hora <= 11) {
            if (hora == 0) {
                hora+= 1;
            }
            printf("En formato de 12 horas serian las %.2d:%.2d:%.2d AM\n", hora, minutos, segundos);
        }
        else if (hora >= 13 && hora <= 23) {
            hora-= 12;
            printf("En formato de 12 horas serian las %.2d:%.2d:%.2d PM\n", hora, minutos, segundos);
        }
        else if (hora == 12) {
            printf("En formato de 12 horas serian las %.2d:%.2d:%.2d PM\n", hora, minutos, segundos);
        }
    }

    else {
        printf("Uno de los datos es incorrecto\n");
    }
    
    

    return 0;
}