#include <stdio.h>
#include <stdlib.h>
double karekok(double n)
{
    double Karekok;
    int i;
if(n>0.0)
{
    Karekok=n/2;
    for(i=0;i<50;i++)
    {
        Karekok=((Karekok*Karekok)+n)/(2*Karekok);
    }
    return Karekok;
}
else if (n==0)
{
    return 0;
}
else {

    printf("lutfen gecerli bir deger giriniz:");


}



}

int main()
{

double sayi;
printf("karakoku bulunacak sayi:");
scanf("%lf",&sayi);
printf("%lf karakoku= %.5lf ",sayi,karekok(sayi));
    return 0;
}
