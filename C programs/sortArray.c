#include <stdio.h>
#include <string.h>


void sort(int *a,int n)
{
   int i,j;
   int temp;
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(*(a+i) > *(a+j))
           {
            temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
           }
       }
   }

}


int main()
{
    int n;
    printf("Enter size of arrya: ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("\nEnter data in array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(&a,n);
    printf("After sorting\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

return 0;
}
