#include<stdlib.h>
#include<stdio.h>
int main() {
	int n = 99999999;
	int somme = 0;
	int j = 1;
	printf("Entrer un nombre n \n");
	
	scanf_s("%u", &n);


	while (n>360)
	{
		printf("Le nombre est trop grand\n");
		printf("Reesayez\n");
		scanf_s("%u", &n);
	}
	
	 for (int i = 1; i < n+1 ; i++)
	{
		
		somme += i;
		if (65535 - somme <= i)
		{
			printf("Le nombre est trop grand\n");
				
			
		}
	}
	
	 /*	while (j < n + 1)
	{
		somme += j;
		j++;
		if (65535 - somme <= j)
		{
			printf("Le nombre est trop grand\n");
			printf("N maximum = %i \n", j);
			return(EXIT_SUCCESS);
		}
		
	}*/
	/*do
	{
		somme += j;
		j++;
	} while (j < n + 1); */
	printf("La somme est: %i \n", somme);
	system("pause");
	return(EXIT_SUCCESS);
}