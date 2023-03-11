// Klavyeden bir öðrencinin vize ve final notu giriliyor.
// Vizenin %40'ý ve finalin %60'ý alýnarak
// Öðrencinin not ortalmasýný bulunuz.

#include <stdio.h>
main()
{
	float vize,final,ort;
	printf("Vize notunu giriniz:");
	scanf("%f",&vize);
	printf("\n Final notunu giriniz:");
	scanf("%f",&final);
	ort = vize*0.4 + final *0.6;
	printf("\n Ortalama=%f",ort);
}


