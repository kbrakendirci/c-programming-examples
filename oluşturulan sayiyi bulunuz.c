#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,o,y,sayi;
    printf("birler basamağini giriniz:");
    scanf("%d",&b);
    printf("onlar basamağini giriniz:");
    scanf("%d",&o);
    printf("yüzler basamağini giriniz:");
    scanf("%d",&y);
    sayi=b+o*10+y*100;
    printf("oluşturulan sayiyi giriniz=%d",sayi);
    return 0;
}
