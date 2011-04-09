#include<stdio.h>

int main(void)
{
  int i;
  int j;
  int k;
  int temp;
  int a[10]={12,31,54,67,87,43,55,76,90,42};
  for (i = 0; i < 10; i++)  
  {  
   printf("%5d",a[i]);
  }  
   printf("\n");  

for(i=0;i<9;i++)
 {
   k=i;
  for(j=i+1;j<10;j++)
  {
   if (a[k]>a[j])
   {
     k=j;
   }
  }
  if(k !=i)
  {
      temp=a[i];
      a[i]=a[k];
      a[k]=temp;
  }
 }
  return 0;
}
