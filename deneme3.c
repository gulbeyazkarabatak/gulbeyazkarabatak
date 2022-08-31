#include <stdio.h>
int main()
{
	int vize,final;
	float ortalama;
	
	printf("vize notunuzu giriniz =");
	scanf("%d",&vize);

	printf("final notunuzu giriniz =");
	scanf("%d",&final);
	
	ortalama=vize*0.4+final*0.6;
	printf("ortalamaniz %.1f \n",ortalama);
	
	if(ortalama >= 60)
		printf("gectiniz");
	else
		printf ("kaldiniz");
	
	return 0;
}
