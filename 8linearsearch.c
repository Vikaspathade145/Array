#include<stdio.h>
int main()
{
    int a[100],i,n,key,flag;
    printf("enter a number for search");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=0;
            break;
        }
    }
  if(flag==1)
      printf("found");
else  
    printf("not found");
return 0;
}