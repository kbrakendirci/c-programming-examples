#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birlerbasamagi,onlarbasamagi,yuzlerbasamagi,sayi;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    birlerbasamagi=sayi%10;
    onlarbasamagi=sayi%100/10;
    yuzlerbasamagi=sayi%1000/100;
    printf("birler basama��=%d\nonlar basama�i=%d,y�zler basama�i=%d", birlerbasamagi,onlarbasamagi,yuzlerbasamagi);


    return 0;
}
