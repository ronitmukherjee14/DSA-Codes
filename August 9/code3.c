//u r given an array of 0's and 1's . Arrange the zeros on left side and 1's on right side while traversing only once

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of the array\n");
        scanf("%d",&a[i]);
    }
    int temp,base=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            temp=a[i];
            a[i]=a[base];
            a[base]=temp;
            base=base+1;
        }
    }
        
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}