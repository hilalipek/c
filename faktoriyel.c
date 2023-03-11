#include <stdio.h>
main()
{
  int s1,faktor=1,i;
  printf("Sayiyi giriniz ");
  scanf("%d",&s1);
  for (i=1;i<=s1;i++)
  {
  	faktor = faktor * i;
  }
  printf("Sayinin faktoriyeli=%d",faktor);
}
