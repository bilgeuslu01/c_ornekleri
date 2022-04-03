#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
void hesapla(float yaricap)
{
    float alan,cevre;
    alan=PI*yaricap*yaricap;
    cevre=2*PI*yaricap;
    printf("dairenin alani=%.2f",alan);
    printf("\ndairenin cevresi=%.2f",cevre);


}




int main()
{
    float yaricap;
    printf("lutfen dairenin yaricapini giriniz:");
    scanf("%f",&yaricap);
    hesapla(yaricap);
    return 0;
}
