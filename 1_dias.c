/**
 * Un programa que acepte un argumento entero (cantidad de dias)
 * Imprimir la cantidad de años, semanas y dias que correspondan
 * al argumento ingresado. Ignorar años bisiestos.
 * Ejemplo:
 * $ ./1_dias 366
 * años: 1, semanas: 0, dias: 1
 */

 #include <stdlib.h>
 #include <stdio.h>
int main(int argc, char  *argv[]) {
  int dias = atoi(argv[1]);

 printf("años: %d, ",dias/365 );
  dias%=365;

  printf("semanas: %d, ",dias/7 );
   dias%=7;

   printf("dias: %d",dias/1 );

  return 0;
}
