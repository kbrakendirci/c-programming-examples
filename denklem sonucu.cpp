#include <stdio.h>
#include <stdlib.h>

int main(){
printf("ax^2+bx+c denkleminin sonucunu bulunuz\n");
int a,b,c,x,sonuc;
printf("a ,b,c ,x dešerlerini giriniz:\n");
scanf("%d%d%d%d",&a,&b,&c,&x);

sonuc=a*x*x+b*x+c;
printf("ax^2+bx+c=%d",sonuc);
return 0;
}



