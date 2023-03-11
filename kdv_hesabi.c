#include <stdio.h>
main()
{
	float fiyat, kdvorani, miktar, toplam;
	printf("Urun fiyatini giriniz");
	scanf("%f",&fiyat);
	printf("KDV Oranini Giriniz(1,8,18)");
	scanf("%f",&kdvorani);
	printf("Miktari giriniz");
	scanf("%f",&miktar);
	//toplam = (fiyat * kdvorani/100+fiyat)*miktar;
	toplam = fiyat * kdvorani/100;
	toplam = (toplam + fiyat)*miktar;
	printf("Toplam Tutar=%1.2f",toplam);
}
