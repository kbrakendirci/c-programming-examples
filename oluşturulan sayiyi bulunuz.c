#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,o,y,sayi;
    printf("birler basama�ini giriniz:");
    scanf("%d",&b);
    printf("onlar basama�ini giriniz:");
    scanf("%d",&o);
    printf("y�zler basama�ini giriniz:");
    scanf("%d",&y);
    sayi=b+o*10+y*100;
    printf("olu�turulan sayiyi giriniz=%d",sayi);
    return 0;
}
