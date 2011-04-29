#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20] = "This is a C world!";
    char c_str[20];
    char *p_c=c_str;
    char *p = str;
    char *s = str;   
    /*去掉字符串中的空格当p 和 s不相等的时候s跳过并将值赋给p*/
    while(*s != '\0')
    {
        while(*s == ' ')s++;
        if(p != s)   /*p和s不相等时赋值*/
        {
           *p = *s;  /*将s的值赋给p*/
        }
        p++;
        s++;
    }
    *p = '\0';/*程序遇到‘\0’就退出字符串中缺少一个‘\0’补上一个 字符串必须以‘\0结束’*/
    printf("len = %d\t%s\n",strlen(str),str);
   
/*去掉字符串中的空格*/
  for (p=str; *p !='\0';p++) /*从第一个字符开始 在遇到‘\0时结束
   指针p自己依次向后移动’*/
  {
      if(*p ==' ' ) /*如果遇见空格结束此次循环 p加1
      并从入口处进入再次执行该循环依次打印*/
   //   continue;
   //   else
   //   printf("%c",*p);
  // }
//  putchar('\n'); 


 // for(p=str;*p !='\0';p++)
  // {
    //   if(*p !=' ')
     //  {
       //    *p_c=*p;
         //  p_c++;
      // }
  // }  
  // *p_c = '\0';
  // printf("%s\n",c_str);
  //
  //
/*打印出字符串从后向前*/
// for(p=str;*p !='\0';p++ )
// {
 //   putchar(*p);
// }
// putchar('\n');
//  /*从后向前打印出字符串*/

  // while(*p !='\0') p++;  /*p指向最后'\0'处*/

  // for(p--; p != (str-1);p--) /*p自减指向！当p指向头的前一位置时结束
  // p一次减1*/
  // {
    // putchar(*p);
 //  }
 //  putchar('\n');
 //
 //
    return 0;
}
}
