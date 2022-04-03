#include <stdio.h>
#include <stdlib.h>

void ekle(int A[],int sirano,int deger,int elemansayisi)
{
    int i;

    if(sirano<=elemansayisi+1)
    {
     for(i=elemansayisi-1;i>=sirano-1;i--)
     {
         A[i+1]=A[i];
     }
     A[sirano-1]=deger;
     printf("dizimizin eklenmis hali \n");
     for(i=0;i<=elemansayisi;i++)
     {
         printf("%4d",A[i]);
     }


    }
    else {
        printf("gecerli bir sira numarasi giriniz.");
    }

}


main()
{
    int sirasi,i,n,deger;
    printf("kac adet sayi uretilecek:");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;

    }
    for(i=0;i<n;i++)
    {
        printf("%4d",dizi[i]);

    }
    printf("\nhangi siraya eleman eklenecek\n");
    scanf("%d",&sirasi);
    printf("eklenecek sayi nedir:");
    scanf("%d",&deger);

    ekle(dizi,sirasi,deger,n);
    return 0;
}
