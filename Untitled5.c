#include <stdio.h>

int main ()
{
	
 int vize,final;
 float gecme_notu;

printf("Vize notunu giriniz \n ");
 scanf ("%d",&vize) ;
 
 printf("Final notunu giriniz \n ");
  scanf ("%d",&final) ;
	
  gecme_notu=vize*0.4+final*0.6;

   if(gecme_notu>60)
    printf("Gectiniz %2.f", gecme_notu);
   else
    printf("Kaldiniz %2.f",gecme_notu);
	
	
	
	
	
	return 0;
}
