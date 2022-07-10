#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct {
char ilac_adi[20];
int adet;
int fiyat;
}data;

int main()
{ //ilac adedi 20den kucuk olanlarýn ismini yazdýrýyoruz.
     data veriler[N];
     for(int i=0;i<N;i++)
     {  fflush(stdin);
        printf("ilacin adi nedir:");
        gets(veriler[i].ilac_adi);
        printf("\nilac kac adettir:");
        scanf("%d",&veriler[i].adet);
        printf("\nilacin fiyati nedir:");
        scanf("%d",&veriler[i].fiyat);
        }
        printf("ILAC ADI\n");
        printf("===============\n");
        for(int i=0;i<N;i++)
        {

            if(veriler[i].adet<=20)
            {
                printf("%s\n",veriler[i].ilac_adi);
            }
        }
    return 0;
}
