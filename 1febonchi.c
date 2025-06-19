#iclude<stdio.h>
int main()
{
    int a=0,b=1;,c,n,i;
    printf("enter a n");
    scanf("%d",&n);
    if(n=1)
    printf("%d\n",a);
else if(n==2)
    printf("%d\n %d\n",a,b);
else if(n>2)
    {
        printf("%d\n%d\n",a,b);
        for(i=2;i<n;i++)
        {
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
    }
    return 0;
}