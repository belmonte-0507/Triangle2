#include<stdio.h>

void main()
{
   int i, j, input;

   clrscr();

   printf("Please Enter a Number: ");
   scanf("%i",&input);

   for(j = 0; j < input; j++)
   {
     for(i = 0; i < j+1; i++)
     {
	printf("*");
     }

     printf("\n");
   }

   getch();
}
