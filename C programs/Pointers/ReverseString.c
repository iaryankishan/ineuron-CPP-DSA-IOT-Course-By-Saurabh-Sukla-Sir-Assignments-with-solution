#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
  int i,len;
  len=strlen(str);
  for(i=len-1;i>=0;i--)
  printf("%c",*(str+i));
}

int main()
{
    char str[15];
    int i,sum=0;
    printf("Enter string\n");
    gets(str);
    reverseString(str);
    return 0;
}
