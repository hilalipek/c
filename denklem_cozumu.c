#include <stdio.h>
#include <math.h>
main()
{
  // ax2+bx+c=0 ikinci derece denklemin kökünü bulma
  int a,b,c,delta,x1,x2,kok;
  printf("a katsayisini giriniz");
  scanf("%d",&a);
  printf("b katsayisini giriniz");
  scanf("%d",&b);
  printf("c katsayisini giriniz");
  scanf("%d",&c);
  delta = b*b - 4*a*c;
  printf("Delta=%d \n",delta);
  if (delta <0)
  	printf("Reel koku yok");
  if (delta == 0)
  {
  	x1 = b / 2*a;
  	printf("Tek koku var. Kok=%d",x1);
  }
  if (delta >0)
  {
  	kok = sqrt(delta);
  	x1 = (-b - kok)/2*a;
  	x2 = (-b + kok)/2*a;
  	printf("Iki koku var. Kok1=%d Kok2=%d",x1,x2);
  }

}
