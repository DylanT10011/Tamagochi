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
	  printf("\n \t Menú de acciones:\n");
	  printf("\t 1._Jugar\n");
	  printf("\t 2._Comer\n");
	  printf("\t 3._Dormir\n");
	  printf(" \t 4._Ver estado\n");
	  printf("\t 5._ Salir");
	  scanf("%d",&opcion);
	  switch (opcion)
	    {
		    case 1: 
			    printf("\t¿Donde deberíamos jugar?");
			 
			    printf("\n \t1._Jugar En el parque");
			    printf("\n \t2._Jugar Con un juguete");
			    printf("\n \t3._Jugar al escondite");
			    printf("\n \t4._No Jugar");
			    scanf("%d",&subopc1);
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
