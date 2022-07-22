#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1
#define M 2
struct urun{
char referans_kodu[20];
float fiyat;


};


struct isci{
char isim[20];
char soyisim[20];
int yas;
};




struct magaza{
char isim[10];
char sokakismi[20];
char mahalle[15];
char telefon[15];
float satis;
struct isci e1;
struct isci e2;
struct isci e3;
struct urun p[M];
};
void urunu_olustur(struct urun *pr)
{
  printf("referans kodu girin\n");
  scanf("%s",pr->referans_kodu);
    printf("lutfen fiyati girin\n");
  scanf("%f",&pr->fiyat);
}
void isciyi_olustur(struct isci *em)
{
   printf("iscinin adini giriniz:\n");
   scanf("%s",em->isim);
    printf("iscinin soyadini giriniz:\n");
   scanf("%s",em->soyisim);
   printf("iscinin yasini giriniz:\n");
   scanf("%d",&em->yas);
}
void magazayi_olustur(struct magaza *m)
{
 printf("lutfen magazanin ismini girin:");
 scanf("%s",m->isim);
 printf("\nlutfen magazanin bulundugu sokak ismini girin:");
 scanf("%s",m->sokakismi);
 printf("\nlutfen magazanin bulundugu mahalle ismini girin:");
 scanf("%s",m->mahalle);
 printf("\nlutfen magazan telefonu olup olmadigini girin:");
 scanf("%s",m->telefon);
 printf("\nsatis rakamini girin:");
 scanf("%f",m->satis);
 printf("Isci 1:\n");
 isciyi_olustur(&m->e1);
  printf("Isci 2:\n");
 isciyi_olustur(&m->e2);
    printf("Isci 3:\n");
 isciyi_olustur(&m->e3);
for(int i=0;i<m;i++)
{
    printf("urunlerinizi giriniz %d:\n",i);
    urunu_olustur(&m->p[i]);
    }
}
void magazayi_bas(struct magaza m)
{  int i;
    printf("magazanin ismi:%s\n",m.isim);
    printf("magazanin sokagi:%s\n",m.sokakismi);
    printf("magazanin mahallesi:%s\n",m.mahalle);
    printf("magazanin telefonu:%s\n",m.telefon);
    printf("magazanin satis rakami:%s\n",m.satis);
    printf("isci 1: \n");
    isciyi_bas(m.e1);
    printf("isci 2: \n");
    isciyi_bas(m.e2);
    printf("isci 3: \n");
    isciyi_bas(m.e3);
    for(i=0;i<M;i++)
    {
        printf("urun %d\n",i);
        urunu_Bas(m.p[i]);
    }
}
void isciyi_bas (struct isci e)
{
 printf("isim:%s",e.isim);
printf("soyisim:%s",e.soyisim);
printf("yas:%d",e.yas);

}
void urunu_Bas(struct urun p)
{
    printf("referans kodu: %s\n",p.referans_kodu);
     printf("fiyat: %s\n",p.fiyat);
}
void en_yasli(struct magaza m)
{
    struct isci yasli;
    if (m.e1.yas>yasli.yas)
        yasli=m.e1;
    if(m.e2.yas>yasli.yas)
        yasli=m.e2;
    if(m.e3.yas>yasli.yas)
        yasli=m.e3;
    printf("en yasli isci:\n");
    isciyi_bas(yasli);
}
void ortalama_fiyat(struct magaza m[N])
{
    int i,j;
    float sayi;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++) {
            sayi+=m[i].p[j].fiyat;
        }
        printf("%s magazasinda yer alan urunlerin ortalama fiyati:%f\n",m[i].isim,(float)sayi/M);
    }
}
void bulundugu_mahalle(struct magaza m[N],char q[12])
{

    int i;
    for(i=0;i<N;i++)
    {

        if(stricmp(m[i].mahalle,q)==0)
        {
            printf("%s mahallesinde %s magazasi bulunur \n",m[i].mahalle,m[i].isim);
        }
    }
}
int main()
{
struct magaza m[N];

    printf("Magaza %d \n",N);
    magazayi_olustur(&m[N]);
    printf("magaza %d \n",N);
    magazayi_bas(m[N]);
    en_yasli(m[N]);
    ortalama_fiyat(m);
    bulundugu_mahalle(m,"kadikoy");
    return 0;
}
