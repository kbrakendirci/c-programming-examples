#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,h,tabanalani,yanalalani,hacmi;
    printf("k�sa kenar, uzun kenar ve y�ksekli�i giriniz ");
    scanf("%d%d%d",&a,&b,&h);
    tabanalani=a*b;
    yanalalani=4*b*h;
    hacmi=a*b*h;
    printf("TABAN ALAN�=%d\n YANAL ALAN�=%d\n HACM�=%d\n",tabanalani,yanalalani,hacmi);
    return 0;
}
