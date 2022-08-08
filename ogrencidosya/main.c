#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
char adsoyad[30];
char ders[20];
int vize1,vize2,finalnotu;
};
int main()
{
FILE *dosya;
int N,i;
float ort;
printf("lutfen ogrenci sayisini giriniz:");
scanf("%d",&N);
struct ogrenci ogr[N];
dosya=fopen("dersler.txt","w");
if(dosya==NULL)
{
    printf("dosya olusturulamadi.");

}
else {
   for(i=0;i<N;i++)
   {
     fflush(stdin);
     printf("adi soyadi:");
     gets(ogr[i].adsoyad);
     printf("\nDers adi:");
     gets(ogr[i].ders);
     printf("\nvize 1 notu:");
     scanf("%d",&ogr[i].vize1);
     printf("\nvize 2 notu:");
     scanf("%d",&ogr[i].vize2);
       printf("\nfinal notu:");
     scanf("%d",&ogr[i].finalnotu);
    ort=(float)ogr[i].vize1*0.2+(float)ogr[i].vize2*0.2+(float)ogr[i].finalnotu*0.6;
    fprintf(dosya,"%s\t%s\t%d\t%d\t%d\t%.2f\n",ogr[i].adsoyad,ogr[i].ders,ogr[i].vize1,ogr[i].vize2,ogr[i].finalnotu,ort);
    }
fclose(dosya);
}




    return 0;
}
