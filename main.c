#include <stdio.h>

int main(void)
{
   int lunghezzaLato;
   int i=0;
   int k=0;
   int j=0;

   printf("inserisci la lunghezza del lato del quadrato: ");
   scanf("%d", &lunghezzaLato);

   while(i<lunghezzaLato)
   {
      printf("* ");
      i++;
   }
   printf("\n");
   for(i=0; i<=lunghezzaLato-3; i++)
   {
      printf(" *");
      for(j=0; j<=lunghezzaLato-2; j++)
      {
         printf("  ");
      }
      printf("*");
      printf("\n");
   }
   while(k<lunghezzaLato)
   {
      printf(" *");
      k++;
   }
   return 0;



}
