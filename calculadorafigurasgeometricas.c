#include <stdio.h>

//---------------------------------------------------------------------------------------
void areacir(int radio){
    float area;
  area = 3.14*(radio*radio);
  printf("El area del circulo es: %.2f\n",area);
}
void percir (int radio){
    float per;
  per = 6.28*radio;
  printf("El perimetro del circulo es: %.2f\n",per);
}
void Circulo(){
    int radio;
    printf("Ingrese el radio del Circulo: ");
  scanf("%d",&radio);
  areacir(radio);
  percir(radio);
}
//---------------------------------------------------------------------------------------
void areacir(int radio){
    float area;
  area = 3.14*(radio*radio);
  printf("El area del circulo es: %.2f\n",area);
}
void percir (int radio){
    float per;
  per = 6.28*radio;
  printf("El perimetro del circulo es: %.2f\n",per);
}
void Circulo(){
    int radio;
    printf("Ingrese el radio del Circulo: ");
  scanf("%d",&radio);
  areacir(radio);
  percir(radio);
}
//---------------------------------------------------------------------------------------
void Menu(){
    int menu;

  printf("Elija la figura geométrica para realizar el cálculo del perímetro y su área\n1. Circulo\n2. Triangulo\n3. Rectangunlo\n4. Cuadrado\n5. Trapecio\n6. salir\n");
  scanf("%d",&menu);

   switch(menu){
    case 1:
      Circulo();
      break;
    case 2:
      printf("Uste se enceuntra en el Segundo Piso\n");
      break;
    case 3:
      printf("Uste se enceuntra en el Tercer Piso\n");
      break;
    case 4:
      printf("Uste se enceuntra en el Cuarto Piso\n");
      break;
    case 5:
      printf("Uste se enceuntra en el Quinto Piso\n");
      break;
 }
}
//---------------------------------------------------------------------------------------
int main(void) {
  Menu();
  return 0;
}
