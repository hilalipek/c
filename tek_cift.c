#include <stdio.h>
main()
{
  int s1,tekler=0,ciftler=0,i;
  for (i=0;i<4;i++)
  {
    printf("Sayiyi giriniz ");
  	scanf("%d",&s1);
  	if (s1%2 == 0)
      ciftler++; 
    else
      tekler++;
  }
  printf("Teklerin sayisi=%d",tekler);
  printf(" Ciftlerin sayisi=%d",ciftler);
}
