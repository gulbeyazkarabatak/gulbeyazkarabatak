#include <stdio.h>
int main()
{
	int sayi1,sayi2;
	
	printf("ilk sayiyi giriniz = ");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz =");
	scanf("%d",&sayi2);
	
	if (sayi1<sayi2)
		printf("\n buyuk olan = %d",sayi2);
	else
		printf("\n buyuk olan = %d",sayi1);
	

	return 0;
}

