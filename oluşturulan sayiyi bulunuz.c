#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,o,y,sayi;
    printf("birler basamaðini giriniz:");
    scanf("%d",&b);
    printf("onlar basamaðini giriniz:");
    scanf("%d",&o);
    printf("yüzler basamaðini giriniz:");
    scanf("%d",&y);
    sayi=b+o*10+y*100;
    printf("oluþturulan sayiyi giriniz=%d",sayi);
    return 0;
}
