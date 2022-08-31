#include <stdio.h>

int main ()
 {
 	int sayi1,sayi2,toplam=0;
 	
 	float ort;
 	
 	printf ( "Aysik'in cani kac kek istedi? \n" ) ;
 	scanf ("%d",&sayi1) ;
 	
 	printf ( "Aysik'in cani kac kek istedi? \n" ) ;
 	scanf ("%d",&sayi2) ;
 	
 	/*
 	 	printf ( "Aysik'in cani kac kek istedi? \n" ) ;
	 	scanf ("%d%d",&sayi1,&sayi2) ; */
	 	


 	toplam=sayi1+sayi2 ;
 	printf("Aysik'in cani su kadar kek istedi = %d \n" ,toplam );
 	
 	ort=toplam/2.0;
 	printf("Aysik'in cani ortalama su kadar kek istedi = %.2f \n" ,ort );

	 
	 return 0;
 	
 }
