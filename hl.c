#include<stdio.h>
int main(void)
{
   int i=0;
   int j=sizeof(int)*8-4;
   int t=0;
   int d=40;
   char c;
   for(i=0;i<sizeof(int)*2;i++,j-=4)
   {
       c=((d<<j)&0x0f);
   }
   if(t<=9)
  {
    printf("%d",t);
  }
  else
  {
    switch(t)
    {
       case 10:c='a';break;
       case 11:c='b';break;
       case 12:c='c';break;
       case 13:c='d';break;
       case 14:c='e';break;
       case 15:c='f';break;
       default:break;
    }
       printf("%c",c);
  }
  printf("\n");
  return 0;
}
