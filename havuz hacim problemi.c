#include <stdio.h>
#include <stdlib.h>

int main()
{
   float en,boy,yukseklik;
   printf("Havuzun eni boyu ve yüksekliðini giriniz:");
   scanf("%f%f%f",&en,&boy,&yukseklik);
   printf("havuzumuz %.2f kadar su alabilir",en*boy*yukseklik);
   return 0;
}
