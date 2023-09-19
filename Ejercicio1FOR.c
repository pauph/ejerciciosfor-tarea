#include <stdio.h>

int main()
{
    int cont,num;
	printf("Cuantos numeros quieres que imprima: ");
	scanf("%d", &num);
	for (cont=1;cont<=num;cont=cont){
		printf("%d ",cont);
		printf("-%d ",cont);
		cont++;
	}
    return 0;
}
