#include <stdio.h>
#include <stdlib.h>











int main()
{
 int array[100];
 int N;
 int *ptr;
 ptr=array;
 printf("dizi kac elemanli olsun:");
 scanf("%d",&N);
 printf("elemanlari giriniz:");
 for(int i=0;i<N;i++)
 {
     scanf("%d",ptr);
     ptr++;
 }
  ptr=array;
 printf("degerlerim:");
for(int i=0;i<N;i++)
 {
     printf("%d ",*ptr);
     ptr++;
 }
    return 0;
}
