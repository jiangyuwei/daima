#include<stdio.h>
#include<string.h>
int sting_to_number(char *s);
int main(void)
{
  char str[100];
  int number = 0;
  printf("please input the number:\n");
  scanf("%s",str);
  
  number  = sting_to_number(str);
  if(number == -1)
    {
    printf("No number \n");
    }
  else
    {
    printf("number=%d\n",number);
    }
    return 0;
}
int sting_to_number(char *s)
{
    int number = 0;
    if((*s>='0')&&(*s<='9'))
    {
       number = (*s-0x30);
       s++;
       while((*s>='0')&&(*s<='9'))
       {
           number *=10;
           number +=(*s-0x30);
           s++;
       }
    }
    else
    {
      return -1;
    }
    return number;
}
