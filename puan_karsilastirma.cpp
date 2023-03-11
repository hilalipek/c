#include <stdio.h>
main()
{
	int ksay;
	printf("Kac kisinin notunu gireceksiniz?");
	scanf("%d",&ksay);
	float vize[ksay],enbuyuk;
	for (int i=0;i<ksay;i++)
	{
		printf("\n Vize notunu giriniz:");
		scanf("%f",&vize[i]);
	}
	enbuyuk = vize[0];
	for (int j=0;j<ksay;j++)
	{
		if (enbuyuk < vize[j])
			enbuyuk = vize[j];
	}
	printf("\n En Buyuk = %f",enbuyuk);
}


