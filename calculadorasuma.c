// Calculadora utilizando otro paradigma de programacion
#include <stdio.h>

//declarar las variavles a usar

int sumar(int s1, int s2) {
    int suma;
    suma = s1 + s2;
    printf("La suma es %d\n", suma);
return suma;
//al ser una funcion int esta devuelve un valor por lo tanto se agrega un return
}

int resta(int r1, int r2) {
    int diferencia;
    diferencia = r1 - r2;
    printf("La resta es %d\n", diferencia);
return diferencia;
}

int multiplicacion(int p1, int p2) {
    int producto;
    producto = p1 * p2;
    printf("La multiplicacion es %d\n", producto);
return producto;
}

float division(int n1, int n2) {
    int division;
    division = n1 / n2 ;
    if(n2<=0){
        printf("ingrese un valor mayor a 0");

    }
    else{
        printf("la division es %d", division);
    }
return division;
}





int main() {

    int num1, num2, opcion ;
    printf("Ingrese num1: ");
    scanf("%d", &num1);
    printf("Ingrese num2: ");
    scanf("%d", &num2);


    printf("Seleccione una opcion:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
           sumar(num1, num2);
        break;
        case 2:
            resta(num1, num2);
        break;
        case 3:
           multiplicacion(num1, num2);
        break;
        case 4:
            division(num1, num2);
        break;
        default:
            printf("Opcion invalida\n");
        break;
    }
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
