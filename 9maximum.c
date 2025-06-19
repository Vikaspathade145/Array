#include<stdio.h>
int maib()
{
    int a[100],i,n;
    printf("how many enter number");
    scanf("%d",&n);
    printf("enter a number");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
max=a[0];
 for(i=1;i<n;i++)
 {
    if(max<a[i])
    max=a[i];
 }
  printf("max is %d",max);
  return 0;

}