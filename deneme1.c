#include <stdio.h>

int main()
{
	int taban,yukseklik;
	float alan;
	printf("Dikdortgenin taban uzunlugunu giriniz = ");
	scanf("%d",&taban);
	printf("Dikdortgenin yuksekligini giriniz =");
	scanf("%d",&yukseklik);
	
	alan=yukseklik*taban;
	
	printf("Dikdortgenin alaný %.1f birim karedir /n", alan);
	
	
	return 0;
}
