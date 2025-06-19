#include<stdio.h>
int main()
{
    int a[100],max,second,i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    second=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            second=max;
            max=a[i];

        }
    else if(a[i]>second&&a[i]!=max)
     second=a[i];
    }
    printf("second max is : %d",second);
    return 0;
}