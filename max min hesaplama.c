#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,c,max,min;
printf("�� farkl� tam say� girin");
scanf("%d%d%d",a,b,c);
max=a;
min=b;

if(b>max){
    max=b;

}
if(c>max){
    max=c;

}

    printf("maksimum say�=%d",max);

min=a;

if(b<min){
    min=b;
}
if(c<min){
    min=c;
}
printf("minimum say�=%d",min);
return 0;
}
