/* Nombre: Dylan Tristan Paez Deniz
 * Grado y Grupo: 1°D
 * Descripción: Desarrollar un programa básico que simule un Tamagochi
 * mediante bucles,condicionales y operadores lógicos
 */
#include<stdio.h>
int main()
  {
	  int opcion,subopc1;
	  printf("\t Tamagochi");
	  printf("\n Menú de acciones:\n");
	  printf("Jugar\n");
	  printf("Comer\n");
	  printf("Dormir\n");
	  printf("Ver estado\n");
	  printf("Salir");
	  scanf("%d",&opcion);
	  switch (opcion)
	    {
		    case 1:
			    printf("\t ¿Donde deberíamos jugar?");
			    scanf("%d",&subopc1); 
			    switch (subopc1);
			      {
				      case 1: 
					      printf("\nJugar en el parque\n");
					      break;
				      case 2:
					      printf("\nJugar con un juguete\n");
					      break;
				      case 3:
					      printf("\nJugar en la casa\n");
					      break;
				      case 4:
					      printf("\nNo jugar\n");
					      break;
		    break;	    }
	    }
	  
  }
