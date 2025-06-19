#include<stdio.h>
int main()
{
    int a[100],i,n,pos,key;
    printf("how many enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nenter a position\n");
    scanf("%d",&pos);
    printf("enter a key\n");
    scanf("%d",&key);
    for(i=n;i>-pos;i--)
    a[i]=a[i-i];
    a[pos-i];
    n++;
    printf("%d",a[i]);
    for(i=0;i<n;i++)
 return 0;
}