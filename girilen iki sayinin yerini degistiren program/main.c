#include <stdio.h>
#include <stdlib.h>
void yerdegistir(int x,int y)
{
int gecici;
gecici=x;
x=y;
y=gecici;
printf("x degerim=%d y degerim=%d",x,y);

}
int main()
{
    int x,y;
    printf("lutfen iki adet sayi gir:");
    scanf("%d%d",&x,&y);
    printf("x:%d y:%d",x,y);
    yerdegistir(x,y);
    return 0;
}
