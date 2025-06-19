#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("how many enter number");
    scanf("%d",&n);
    printf("enter a number");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
min=a[0];
   for(i=1;i<n;i++)
{
    if(mni>a[i])
    min=a[i];
 }
  printf("min is %d",min);
  return 0;

}