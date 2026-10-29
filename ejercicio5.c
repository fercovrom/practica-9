/*Covarrubias Romero Fernando
Ejercicio en clase
Calculadora*/

#include <stdio.h>

float suma(float num1, float num2);
float resta(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

void main ()
{
  int elec=0,rest;

  do
    {
      printf (" elige una operacion:\n");
      printf (" 1 - Suma\n");
      printf (" 2 - Resta\n");
      printf (" 3 - Multiplicacion\n");
      printf (" 4 - Division\n");
      printf ("Elige:");
      scanf ("%i",&elec);
    }while (elec < 1 || elec > 4);
printf ("dame la primera cifra:");
  scanf ("%f",&n1);
  printf ("dame la segunda cifra:");
  scanf ("%f",&n2);
  switch(elec)
    {
      case 1;
      rest=suma(n1,n2);
      break;
      case 2;
      rest=resta(n1,n2);
      case 3;
      rest=mult(n1,n2);
      case 4;
      rest=div(n1,n2);
      default:
      break;
    }
  float suma(float num1, float num2)
{
  float res;
  res=num1+num2;
  return res;
}
float resta(float num1, float num2)
  {
  float res;
  res=num1-num2;
  return res;
}
float mult(float num1, float num2)
  {
  float res;
  res=num1*num2;
  return res;
}
float div(float num1, float num2)
  {
  float res;
  res=num1/num2;
  return res;
}

  
}
