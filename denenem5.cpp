#include <stdio.h>
int main ()
{
	int sayi;
	int kalan;

	printf("bir sayi giriniz =");
	scanf("%d",&sayi);
	
	kalan=sayi%2;
	
	if(kalan==0)
		printf("sayi cifttir");
	else
		printf("sayi tektir");
		
	return 0;
}
