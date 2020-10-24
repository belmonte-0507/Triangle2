#include<stdio.h>

void main()
{
   int i, j, input;

   clrscr();

   printf("Please Enter a Number: ");
   scanf("%i",&input);

   for(j = 1; j < input; j++)
   {
     for(i = 1; i < j+1; i++)
     {
	printf("*");
     }

     printf("\n");
   }

   getch();
}
