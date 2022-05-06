#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[100],dizi2[100];
    int *sayi1,*sayi2;
    int n,m,i;
    printf("Ilk dizinin kac elemanli olacagini secin(max 50):");
    scanf("%d",&n);
    for(sayi1=dizi1;sayi1<dizi1+n;sayi1++)
    {
        printf("eleman %d:",sayi1-dizi1);
        scanf("%d",sayi1);
    }
    printf("ikinci dizimin eleman sayisi:\n");
    scanf("%d",&m);
      for(sayi2=dizi2;sayi2<dizi2+m;sayi2++)
    {
        printf("eleman %d:",sayi2-dizi2);
        scanf("%d",sayi2);
    }
    printf("ilk dizimiz: ");
    for(i=0;i<n;i++)
    {
        printf("%4d",*(dizi1+i));
    }
 printf("\n ikinci tablomuz:");
 for(i=0;i<m;i++)
 {
     printf("%4d",*(dizi2+i));
 }
 for(sayi1=dizi1+n,sayi2=dizi2;sayi2<dizi2+n;sayi1++,sayi2++)
 {
     *sayi1=*sayi2;
     }
     printf("\nbirlestirmeden sonra:");
     for(i=0;i<n+m;i++)
     {
         printf("%4d",*(dizi1+i));
     }

        return 0;
}
