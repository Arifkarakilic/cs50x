#include <cs50.h>
#include <stdio.h>



int main(void)
{

    int n;
     do
     {
         n=get_int("enter height value : \n");
     }
      while( n < 1 || n > 8);


    for (int i = 1; i <= n; i++)

  {
      for (int a=1;a<n;a--)
      {
          printf(" ");
      }

      for (int j = 1; j <= n; j++)

      {

          printf("#");

      }



      printf("\n");
    
  }
}

