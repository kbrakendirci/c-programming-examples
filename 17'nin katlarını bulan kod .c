#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("bir sayi giriniz:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%17==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
