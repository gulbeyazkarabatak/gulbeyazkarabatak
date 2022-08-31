#include <stdio.h>
int main ()
{
	int sayi;

	printf("bir sayi giriniz = ");
	scanf("%d",&sayi);
	
	if(sayi<0)
		printf("sayi negatiftir");
	else if(sayi>0)
		printf("sayi pozitifitr");
	else
		printf("sayi sifirdir");
	
	
	return 0;
}
