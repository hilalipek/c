// 0'dan baþlayarak klavyeden girilen sayýya kadar olan tek sayýlarýn adedini yazdýran program
# include <stdio.h>
main()
{
	int i,s1,sayac=0;
	printf("Sayiyi giriniz:");
	scanf("%d",&s1);
	for (i=1;i<s1;i=i+2)
	{
		sayac++;
	}
	printf("Tek sayi adedi=%d",sayac);
	
}

