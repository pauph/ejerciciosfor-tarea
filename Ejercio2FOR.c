#include <stdio.h>
#include <math.h>

int main()
{
    int cont,potenciavalores,suma=0;
	  for (cont=1;cont<=100;cont++){
	    potenciavalores=pow(cont,2);
	    suma+=potenciavalores;
	  }
	  printf("Suma de los cuadrados de los primeros 100 numeros: %d", suma);
    
    return 0;
}
