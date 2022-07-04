#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct personel{
int sifre;
char ad[10];
char soyad[10];
int yas;
float maas;
char cinsiyet[10];
}kisiler;
void sirala(kisiler x[],int m)
{
   kisiler t;
 int i,j;
 for(i=0;i<m-1;i++);
 {

     for(j=i+1;j<m;j++)
     {
     if(strcmp(x[i].ad,x[j].ad)>0)

         {
          t=x[i];
          x[i]=x[j];
          x[j]=t;
         }
     }
 }
}
void listele(kisiler x[],int m)
{

    int i;
    for(i=0;i<m;i++)
    {

        printf("%d %s %s %d %.2f %s\n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
    }
}
int main()
{
int n;
printf("kac tane personel bilgisi girilecek:");
scanf("%d",&n);
kisiler p[n];
for(int i=0;i<n;i++)
{
   printf("sifre=");
   scanf("%d",&p[i].sifre);
    printf("ad=");
   scanf("%s",&p[i].ad);
     printf("soyad=");
   scanf("%s",&p[i].soyad);
 printf("yas=");
   scanf("%d",&p[i].yas);
    printf("maas=");
   scanf("%f",&p[i].maas);
    printf("cinsiyet=");
   scanf("%s",&p[i].cinsiyet);
    }
sirala(p,n);

listele(p,n);













    return 0;
}
