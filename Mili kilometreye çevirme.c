#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main()
{
    float girilenmil,kilometre;
    printf("mili giriniz=");
    scanf("%f",&girilenmil);
    kilometre=MIL*girilenmil;//1 mil 1.609 km
    printf("%f mil=%f kilometre",girilenmil,kilometre);


    return 0;
}
