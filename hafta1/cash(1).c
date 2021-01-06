#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float f;
    int sayi = 0;
   
    do
    {
    f=get_float("Alacağınız miktari giriniz : ");
    }while(f <=0);
 int c= round(f*100);
    


    while(c>=25)
    {
        c -= 25;
        sayi++;
    }
     while(c>=10)
    {
        c -= 10;
        sayi++;
    }
     while(c>=5)
    {
        c -= 5;
        sayi++;
    }
     while(c>=1)
    {
        c -= 1;
        sayi++;
    }
    printf("Bozukluk sayiniz :  %i\n " , sayi);
}
