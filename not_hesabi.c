#include <stdio.h>
main()
{
	int ksay;
	printf("Kac kisinin notunu gireceksiniz?");
	scanf("%d",&ksay);
	
	float vize[ksay],ortalama;
	//int i,j;
	for (int i=0;i<ksay;i++)
	{
		printf("\n Vize notunu giriniz:");
		scanf("%f",&vize[i]);
		//ortalama = ortalama + vize[j];
	}
	for (int j=0;j<ksay;j++)
	{
		ortalama = ortalama + vize[j];
	}
	ortalama = ortalama / ksay;
	printf("\n Ortalama = %f",ortalama);
}


