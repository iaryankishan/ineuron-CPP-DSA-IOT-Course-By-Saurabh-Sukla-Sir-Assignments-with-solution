#include <stdio.h>
#include <string.h>


int length(char *c)
{
    int i=0;
    while(*(c+i))
        i++;
    return i;
}
int main()
{
    char c[15];
    int len;
    printf("\nEnter String: ");
    gets(c);
    len=length(c);
    printf("length of string is %d ",len);

return 0;
}
