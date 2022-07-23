#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2
typedef struct {
char isim[20];
float agirlik;
char form[20];
int sayi;
float fiyat;
}meyve;
typedef struct {
meyve f[N];
}sepet;
void meyveyi_olustur(meyve *b)
{
    printf("meyvenin adini giriniz:\n");
    scanf("%s",b->isim);
    printf("meyvenin agirligini giriniz:\n");
    scanf("%f",&b->agirlik);
    printf("meyvenin formunu giriniz:\n");
    scanf("%s",b->form);
    printf("meyvenin sayisini giriniz:\n");
    scanf("%d",&b->sayi);
    printf("meyvenin fiyatini giriniz:\n");
    scanf("%f",&b->fiyat);
}
void sepeti_olustur(sepet *b)
{
    int i;
    for(i=0;i<N;i++)
    {
        meyveyi_olustur(&b->f[i]);
    }
}
void agirligi_hesapla(sepet b,float *total)
{
    int i;
    *total=0;
    for(i=0;i<N;i++)
    {
        *total=*total+(b.f[i].agirlik*b.f[i].sayi);
    }


}
void fiyati_hesapla (sepet d,float *total)
{
 *total=0;
 int i;
 float sekilegore = 0;
 for(i=0;i<N;i++)
 {
     sekilegore=d.f[i].fiyat;
     if(strcmp(d.f[i].form,"yuvarlak")==0)
     {

         sekilegore=sekilegore*2;

     }
     if(d.f[i].agirlik>200)
     {
         sekilegore=sekilegore+3;

     }
     *total=*total+(sekilegore*d.f[i].sayi);
 }

}
int main()
{
    float a,b;
sepet p;
sepeti_olustur(&p);
agirligi_hesapla(p,&a);
fiyati_hesapla(p,&b);
printf("Toplam agirlik: %.2f",a);
printf("\nToplam fiyat : %.2f",b);
return 0;
}
