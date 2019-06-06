#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,toplam;
    toplam=0;
    printf("bir sayi giriniz=");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        toplam=i+toplam;
    }
    printf("toplam=%d",toplam);
    return 0;
}
