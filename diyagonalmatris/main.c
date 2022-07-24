#include <stdio.h>
#include <stdlib.h>
#define N 5
void simetrik(int mat [N][N],int *deger)
{
   int i,j;
   *deger=1;
   for(i=0;i<N;i++)
   {

       for(j=i;j<N;j++)
       {
           if(mat[i][j]!=mat[j][i])
      {
          *deger=0;

      } }
   }

}

void bastirma(int mat [N][N])
int i,j;
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
         printf("%4d",mat[i][j]);
    }
    printf("\n");

}
void diyagonal(int matris[N][N],int *diyagonalmi)
{
    int i,j;
    *diyagonalmi=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j && matris[i][j]!=0)
            {
                *diyagonalmi=0;
            }

        }
    }

}

int main()
{
    int d,e;
    int matris[N][N]={
    {2,0,0,0,0},
    {0,6,0,0,0},
    {0,0,2,0,0},
    {0,0,0,7,0},
    {0,0,0,0,4},
    };
    bastirma(matris);
    simetrik(matris,&d);
    diyagonal(matris,&e);
    if(d==1)
    {
        printf("bu matris simetriktir");
    }
    else {
        printf("bu matris simetrik degildir.");
    }
    if(e)
    {

        printf("bu matris diyagonaldir.");

    }
    else
    {
     printf("bu matris diyagonal degildir.") ;
    }
    return 0;
}
