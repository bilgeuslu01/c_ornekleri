#include <stdio.h>
#include <stdlib.h>

struct oyuncu {
char isim[10];
char soyad[10];
int yas;
int seviye;
};
struct ekip {
 char isim[10];
 struct oyuncu oyuncu1;
 struct oyuncu oyuncu2;



 };
 void oyuncuyu_olustur(struct oyuncu *oyuncu1)
 {
    printf("ismi giriniz:");
    scanf("%s",oyuncu1->isim);
    printf("\nsoyad giriniz:");
    scanf("%s",oyuncu1->soyad);
    printf("\nyasi giriniz:");
    scanf("%d",&oyuncu1->yas);
    printf("\nseviyeyi giriniz");
    scanf("%d",&oyuncu1->seviye);


 }
 void ekibi_olustur(struct ekip *ekp)
 {
   printf("ekibin adini giriniz:");
   scanf("%s",ekp->isim);
   printf("\noyuncu 1:");
   oyuncuyu_olustur(&ekp->oyuncu1);
    printf("\noyuncu 2:");
    oyuncuyu_olustur(&ekp->oyuncu2);

 }
 void ekibi_bas(struct ekip ekp)
 {
     printf("isim:%s",ekp.isim);
     printf("oyuncu 1:\n");
     oyuncuyu_bas(ekp.oyuncu1);
     printf("oyuncu 2:\n");
     oyuncuyu_bas(ekp.oyuncu2);

 }
 void oyuncuyu_bas(struct oyuncu j)
 {

     printf("\nisim : %s",j.isim);
     printf("\nsoyisim: %s",j.soyad);
     printf("\nyas: %d",j.yas);
     printf("\nseviye: %d",j.seviye);
 }
int main()
{
struct ekip ekp[2];
int i;
for(i=0;i<2;i++)
{
  printf("ekip %d:\n",i);
  ekibi_olustur(&ekp[i]);



}
for(i=0;i<2;i++)
{

    printf("ekip %d:\n",i);
    ekibi_bas(ekp[i]);

}




    return 0;
}
