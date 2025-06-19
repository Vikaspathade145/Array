#include<stdio.h>
int main()
{
    int a[100],i,n,j,key;
    printf("how many enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter deletion number");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            for(j=0;j<n-1;j++)
            a[j]= a[j+1];
        n--;
        break;
        }
    }
    printf("%d",a[i]);
    for(i=0;i<n;i++)\
    return 0;
}