#include <stdio.h>
int main()
{
    int arr[5];
    int i,sum=0;
    printf("Enter data in array\n");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    int *ptr = arr;
    for(i=0;i<5;i++)
    sum+= *(ptr+i);
    printf("Sum of data in array is %d",sum);
    return 0;
}

