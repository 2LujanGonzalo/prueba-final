/**
 * Un programa que acepte tres argumentos enteros positivos.
 * Imprime "falso" si alguno es mayor o igual a la suma de los otros dos.
 * Caso contrario imprime "verdadero".
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

 if ( a>=b+c || b>=a+c || c>=a+b) {
   printf("falso\n");
 } else {
   printf("verdadero\n");
 }

  return 0;
}
