#include<stdio.h>
int main(void)
{
   long num;
   long sum = 0L;
   int status;

   printf("plesae enter a number to summed (q to quit):");
   status = scanf("%ld",&num);
   while(status == 1)
   {
      sum=sum+num;
      printf("please enter next number:");
      status = scanf("%ld",&num);
   }
   printf("those numbers sum is %ld:\n",sum);
   return 0;
}
