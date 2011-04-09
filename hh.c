#include<stdio.h>

void print_day(int day)
{
  switch(day)
  {
    case 1:
      printf("monday\n");
      break;
    case 2:
      printf("tuesday\n");
      break;
    case 3:
      printf("wednesday\n");
      break;
    case 4:
      printf("thursday\n");
      break;
    case 5:
      printf("friday\n");
      break;
    case 6:
      printf("saturday\n");
      break;
    case 7:
      printf("sunday\n");
      break;
    default:
     printf("illegal day number!\n");
     break;

  }
}
int main(void)
{
  print_day(6);
  return 0;
}
