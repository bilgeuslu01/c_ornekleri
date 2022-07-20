#include <stdio.h>
#include <stdlib.h>

struct katilimci {
char soyad[10];
char ad[10];
int kahvalti; //0= hayýr, 1=evet
int aksamyemegi;
int hotel; //1=otel yok 2= 2 yýldýz 3 = 3 yýldýz
int yalniz; //0=arkadasi ile 1=yalnýz


};
void ikiyildizli(struct katilimci tab[4])
{

    printf("iki yildizli hotelde konaklayan katilimcilar:\n");
    for(int i;i<4;i++)
    {
      if(tab[i].hotel==2)
      {
          printf("soyad:%s,Ad=%s \n",tab[i].soyad,tab[i].ad);
      }

    }

}
void kahvalti(struct katilimci tab[],int *n)
{
    int i;
    *n=0;
    for(i=0;i<4;i++)
    {
     if ( tab[i].kahvalti==1)
     {
        *n=*n+1;
         if(tab[i].yalniz==0)
         {
             *n=*n+1;
         }
     }

    }
}
void fatura(struct katilimci p,int *total)
{
    *total=0;
    if(p.kahvalti==1)
        *total+=15;
    if(p.aksamyemegi==1)
    *total+=35;
    if(p.yalniz==0)
        *total*=2;
    if(p.hotel==2)
        *total+=75;
    if(p.hotel==3)
        *total+=100;

}
int main()
{ int n;
int m;
    struct katilimci tablo[4]={{"boz","can",0,1,2,1},{"uslu","bilge",0,0,1,0},{"kaya","asuman",1,0,2,1},{"yýldýran","ömer",0,1,1,0}};
    ikiyildizli(tablo);
    kahvalti(tablo,&n);
    fatura(tablo[2],&m);
    printf("kahvalti yapan katilimcilar:%d \n",n);
    printf("%s soyisimli katilimci tarafindan ödenen fatura: %d",tablo[2].soyad,m);

    return 0;
}
