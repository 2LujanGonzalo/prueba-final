/**
 * Un programa que acepte tres argumentos: numeros reales a, b y c. Los
 * coeficientes de una funcion cuadratica ax^2 + bx + c.
 * El programa calcula las raices x1 y x2 usando la conocida formula.
 * Si no hay raices reales (discriminante menor a cero) el programa
 * imprime un mensaje de error. En el caso de que el usuario ingrese a
 * igual a cero tambien imprime un error, que no se puede dividir por cero.
 * Ejemplos:
 * $ ./4_cuadratica 0 1 1
 * Error: no se puede dividir por cero
 * $ ./4 cuadratica 1 1 1
 * Error: no hay raices reales
 * $ ./4 cuadratica 1 5 6
 * x1: -2.00, x2: -3.00
 */

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {

  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int c=atoi(argv[3]);
//(-b+-sqrt((b*b)-4*a*c))/2.a
int discriminante=(b*b)-4*a*c;
double sqrt1=sqrt((b*b)-4*a*c);
if (a==0) {
  printf("Error: no se puede dividir por cero\n" );
return 0;
}

if (discriminante <=0) {
printf("Error: no hay raices reales\n");
return 0;
}

double Raiz1=(-b+sqrt1)/2*a;
double Raiz2=(-b-sqrt1)/2*a;


printf("x1: %.2f, ",Raiz1);
printf("x2: %.2f",Raiz2);


  return 0;
}
