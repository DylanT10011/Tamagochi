/* Nombre: Dylan Tristan Paez Deniz
 * Grado y Grupo: 1°D
 * Descripción: Desarrollar un programa básico que simule un Tamagochi
 * mediante bucles,condicionales y operadores lógicos
 */
#include<stdio.h>
int main()
  {
	  int opcion=0,subopc1,subopc2,subopc3;
	  printf("\t Tamagochi");
	  printf("\n Menú de acciones:\n");
	  printf("Jugar\n");
	  printf("Comer\n");
	  printf("Descansar\n");
	  printf("Ver estado\n");
	  printf("Salir");
	  printf("\n Selecciona una acción: ");
	  scanf("%d",&opcion);
	 
	  do{
	  switch (opcion)
	    {
		    case 1: 
			    break;
		    case 2: 
			    break;
		    case 3: 
			    printf("\t¿Cuantas horas voy a dormir?");
			    printf("\nTomar una siesta de 4 horas");
			    printf("\nDormir toda la noche");
			    printf("\nNo dormir");
			    scanf("%d",&subopc3);

			    switch(subopc3)
			      {
				      case 1: 
					      break;
				      case 2:
					      break;
				      case 3:
					      break;
			      }

			    break;
	    }
	  }while(opcion>1 || opcion<4);
  }
