#include<stdio.h>

{
	int sayi; 
	
	printf("Lutfen sayi giriniz \n");
	scanf("%d",&sayi);
	
	if(sayi>0)
	 printf("Pozitif \n");
	
	else if(sayi<0)
	 printf("Negatif \n");
	
	else
	 printf("Sifir \n");
	 
	 printf("Program sonu \n");
	
	return 0 ;
}
