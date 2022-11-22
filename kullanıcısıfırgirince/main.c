#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char kelime[30];
    while(1)
    {
        printf("lutfen bir kelime giriniz:");
        gets(kelime);
        if(kelime[0]=='0')
        {
            exit(1);

        }
        else
        {
            dosya=fopen("kelimeler.txt","a");
            if(dosya==NULL)
            {

                printf("dosya acilamadi.");

            }
            else
            {
                fprintf(dosya,"%s\n",kelime);
           fclose(dosya); }
        }
    }

    return 0;
}
