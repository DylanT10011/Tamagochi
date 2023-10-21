/* Nombre: Dylan Tristan Paez Deniz
 * Grado y Grupo: 1°D
 * Descripción: Desarrollar un programa básico que simule un Tamagochi
 * mediante bucles,condicionales y operadores lógicos
 */
#include<stdio.h>
int main()
  {
	  int opcion,subopc1,subopc2;
	  printf("\t Tamagochi");
	  printf("\n Menú de acciones:\n");
	  printf("Jugar\n");
	  printf("Comer\n");
	  printf("Dormir\n");
	  printf("Ver estado\n");
	  printf("Salir");
	  scanf("%d",&opcion);

	  switch(opcion)
	    {
		    case 1:
			    break;
		    case 2: 
			    printf("\t¿Qué vamos a comer?\n");
			    scanf("%d",&subopc2);
			    printf("\nComer carne");
			    printf("\nComer frutas");
			    printf("\nComer comida rápida");
			    printf("\nNo comer");
			    break;
	    }
  }
