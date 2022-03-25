#include <stdio.h>

int main(){

  char nombre[21];
  char apellido[20];
  char edad[3];
  char datos[60];

  printf("Introduzca su nombre: ");
  scanf("%s", nombre);
  printf("Introduzca su apellido: ");
  scanf("%s", apellido);
  printf("Introduzca su edad: ");
  scanf("%s", edad);
  

  int lenNombre = 0;
  int lenApellido = 0;
  int lenEdad = 0;
  int lenTotal;

  for (int i=0; nombre[i] != 0; i++) {
    lenNombre++;
  }
  for (int i=0; edad[i] != 0; i++) {
    lenEdad++;
  }
  for (int i=0; apellido[i] != 0; i++) {
    lenApellido++;
  }

  lenTotal = lenNombre + lenApellido + lenEdad;

  for (int i=0; nombre[i] != 0; i++) {
    datos[i] = nombre[i];
    if (nombre[i+1] == 0) {
      datos[i+1] = ' ';
    }
  }
  for (int i=0; apellido[i] != 0; i++) {
    datos[lenTotal - (lenApellido + lenEdad) + (i+1)] = apellido[i];
    if (apellido[i+1] == 0) {
      datos[lenTotal - (lenApellido + lenEdad) + (i+2)] = ' ';
    }
  }
  for (int i=0; edad[i] != 0; i++) {
    datos[lenTotal - lenEdad + (i+2)] = edad[i];
    if (edad[i+1] == 0) {
      datos[lenTotal - lenEdad + (i+3)] = ' ';
    }
  }
  printf("\nNombre, Apellido y Edad: %s\n", datos);
  
  return 0;
}