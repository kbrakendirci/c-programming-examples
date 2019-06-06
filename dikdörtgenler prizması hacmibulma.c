#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,h,tabanalani,yanalalani,hacmi;
    printf("kýsa kenar, uzun kenar ve yüksekliði giriniz ");
    scanf("%d%d%d",&a,&b,&h);
    tabanalani=a*b;
    yanalalani=4*b*h;
    hacmi=a*b*h;
    printf("TABAN ALANÝ=%d\n YANAL ALANÝ=%d\n HACMÝ=%d\n",tabanalani,yanalalani,hacmi);
    return 0;
}
