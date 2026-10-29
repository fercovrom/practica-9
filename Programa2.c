/*Covarrubias Romero Fernando
arreglo unidimensional validando con do while y empleando la estructura for*/

#include <stdio.h>

int main ()
{
int lista[10],elem=0; // Se declara el arreglo unidimensional y elem
  
//validacion
do
  {
printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
scanf("%i",&elem);
  }while (elem<1 || elem>10);

for (int i = 0 ; i < elem ; i++)
{
printf("Dar un número entero para el elemento %i del arreglo ", i+1 );
scanf("%i",&lista[i]);
}
printf("Los valores dados son: ");

for (int j = 0 ; j < elem ; j++)
{
printf("%i ", lista[j] );
}
printf("\n\n");
return 0;
}
