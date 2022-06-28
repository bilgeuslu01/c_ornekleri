#include <stdio.h>
#include <stdlib.h>
struct degerTip
{
    int tip;
    union{
    char kar;
    float sayi;
    }bir;


};
int main()
{
    struct degerTip degerler[20];
    char satir;
    int i=-1;
    int j;
    int n=0;
    float ortalama=0.0;
    do
    {
        i++;
        printf("lutfen bir tamsayi giriniz:\n");
        scanf("%d",&degerler[i].tip);
        printf("\n");
        scanf("%c",&satir);
        if(degerler[i].tip==1)
        {
            printf("karakter giriniz\n");
            scanf("%c",degerler[i].bir.kar);
            scanf("%c",&satir);
        }
        else if(degerler[i].tip==0)
        {
            printf("reel sayi giriniz \n");
            scanf("%f",degerler[i].bir.sayi);

        }
    }
    while(degerler[i].tip==0 || degerler[i].tip==1);

     for(j=0;j<=i;j++)
     {
       if(degerler[j].tip==0)
         {

             ortalama+=degerler[j].bir.sayi;
            n++;
         }
     }
    ortalama=ortalama/n;
    printf("reel sayilarin ortalamasi : %f",ortalama);
    return 0;
}
