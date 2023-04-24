#include <stdio.h>
#include <string.h>

int main() {
  char nombre[50];
  char pin[5];
  char confirmacion[5];
  char opcion;
  float saldo = 500.0;
  float cantidad;
  int continuar = 1;

  printf("Ingrese su nombre: ");
  scanf("%s", nombre);

  printf("Ingrese su PIN de 4 dígitos: ");
  scanf("%4s", pin);

  printf("Confirme su PIN: ");
  scanf("%4s", confirmacion);

  if (strcmp(pin, confirmacion) != 0) {
    printf("El PIN no coincide con la confirmación.\n");
    return 1;
  }

  printf("Bienvenido, %s!\n", nombre);

  while (continuar) {
    printf("1. Consulta de saldo\n");
    printf("2. Retiro\n");
    printf("3. Depósito\n");
    printf("4. Salir\n");
    printf("Ingrese su opción: ");
    scanf(" %c", &opcion);

    switch(opcion) {
      case '1':
        printf("Su saldo actual es $%.2f.\n", saldo);
        break;
      case '2':
        printf("Ingrese la cantidad a retirar: ");
        scanf("%f", &cantidad);

        if (cantidad > saldo) {
          printf("No tiene suficientes fondos.\n");
        } else {
          saldo -= cantidad;
          printf("Ha retirado $%.2f. Su saldo actual es $%.2f.\n", cantidad, saldo);
        }
        break;
      case '3':
        printf("Ingrese la cantidad a depositar: ");
        scanf("%f", &cantidad);
        saldo += cantidad;
        printf("Ha depositado $%.2f. Su saldo actual es $%.2f.\n", cantidad, saldo);
        break;
      case '4':
        continuar = 0;
        printf("Gracias por utilizar nuestros servicios.\n");
        break;
      default:
        printf("Opción no válida.\n");
    }
  }

  return 0;
}
