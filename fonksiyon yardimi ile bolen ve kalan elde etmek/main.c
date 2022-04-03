#include <stdio.h>
#include <stdlib.h>
void bolmeislemi(int bolunen,int bolen)
{
    int bolum;
    int kalan;
    bolum=bolunen/bolen;
    kalan=bolunen%bolen;
    printf("bu islemin bolumu=%d \n bu islemin kalani=%d",bolum,kalan);

}
int main()
{
    int bolunen,bolen;
    printf("lutfen bolunecek sayiyi ve kaca bolunecegini girin:\n");
    scanf("%d%d",&bolunen,&bolen);
    bolmeislemi(bolunen,bolen);
    return 0;
}
