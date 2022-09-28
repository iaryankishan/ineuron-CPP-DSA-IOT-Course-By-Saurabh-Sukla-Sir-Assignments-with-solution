#include <stdio.h>

void reverse(int *ptr)
{
   int i;
  for(i=5-1;i>=0;i--)
  printf("%d ",*(ptr+i));
}

int main()
{
    int arr[5];
    int i,sum=0;
    printf("Enter element in array\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    reverse(arr);
    return 0;
}
