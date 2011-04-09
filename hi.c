#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(float a,float b);

int main(void)
{
  int a = 5;
  int b = 2;
  int c = 0;
  int d = 0;
  int e = 0;
  float m = 0;
  c = add(a, b);
  d = sub(a, b);
  e = mul(a, b);
  m = div(a, b);
  printf("c = %d\n",c);
  printf("d = %d\n",d);
  printf("e = %d\n",e);
  printf("m = %f\n",m);
  return 0;
}
int add(int a,int b)
{
  return (a+b);
}
int sub(int a,int b)
{
  return (a-b);
}
int mul(int a,int b)
{
  return (a*b);
}
float div(float a, float b)
{
 return (a/b);
}
