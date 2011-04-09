#include<stdio.h>
int main(void)
{
 int i = 0;
 int d = 0;
 int j = 0;

 puts("please input a number:");
 scanf("%d",&d);


 puts("result:");
 j = 31;
 for(i=o;i<32;i++,j--)
 {
    printf("%d",((d>>j) & 0x01));
   
 }
 printf("\n");
 return 0;

}
