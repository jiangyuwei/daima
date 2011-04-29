#include<stdio.h>
int main(void)
{
   unsigned int mask = 0x0f;
   int i = 0;
   int d = 0;
   int j = 0;
   char str_h[20] = "0123456789abcdef";
   printf("please input a number:\n");
   scanf("%d",&d);
   
   j = sizeof(int)*8 - 4;
  for(i=0; i<sizeof(int)*2; i++,j=j-4 )
   {
     printf("%c",str_h[(d>>j)&mask]); 
     
   }
   printf("\n");
   
   return 0;
}

#include<stdio.h>
int main(void)
{
  unsigned int mask = 0x0f;
  int i = 0;
  int d = 0;
  int j = 0;
  char str_h[20] = "012344abc";
  printf("please input a number:\n");
  scanf("%d",&d);

  j = sizeof(int)*8 - 4;
  for (i = 0; i < sizeof(int)*2; i++;j = j-4) 
  {
      printf("%c",str_h[(d>>j)&mask]);
  }
  printf("\n");
  return 0;
}
