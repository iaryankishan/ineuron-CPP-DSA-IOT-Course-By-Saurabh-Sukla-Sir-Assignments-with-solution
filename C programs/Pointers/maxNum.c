#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    int *ptr1 = &x, *ptr2 = &y;
    if (*ptr1 > *ptr2)
        printf("Maximum Num is: %d", *ptr1);
    else
        printf("Maximum Num is: %d", *ptr2);
    return 0;
}

