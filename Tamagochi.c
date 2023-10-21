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
			    printf("\t¿Donde deberíamos jugar?");
			    scanf("%d",&subopc1);
			    printf("\nJugar En el parque");
			    printf("\nJugar Con un juguete");
			    printf("\nJugar al escondite");
			    printf("\nNo Jugar");
			    switch (subopc1)
			      {
				      case 1: 
					      break;
				      case 2: 
					      break;
				      case 3: 
					      break;
				      case 4: 
					      break;
	
			      }
			    break;
	    }

  }
