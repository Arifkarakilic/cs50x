#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
     h= get_int("enter height value : ");
    }
    while (h<1 || h>8);

     for (int i = 1; i <= h ; i++)

  {
      for(int a = 1 ; a <= h -i  ; a++)
      {
          printf(" ");
      }

      for (int j = 1; j <= i  ; j++)

      {

          printf("#");

      }
      for (int a = 0; a <= 2; a++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i ; j++)
        {
            printf("#");
        }

      printf("\n");
      

  }
}
