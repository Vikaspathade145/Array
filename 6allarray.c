#include<stdio.h>
  int main()
{
    // Accept
    // 1. Display 2. Search 3. Insert 4. Delete 5. Count 6. Reverse 7. Exit

    int a[100], i,j,key,pos,count=0,n,ch,flag;
    int temp=0;


    printf("How many numbers you wants to enter : ");
    scanf("%d",&n);

    printf("Enter Numbers : \n");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    while (1)
    {
        printf("\n\n1. Display\n 2. Search\n 3. Insert\n 4. Delete\n 5. Count\n 6. Reverse\n 7. Exit\nEnter a Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1://simple array start
            for ( i = 0; i < n; i++)
                printf("%d\n",a[i]);
            break;

            //Linear Search start
            case 2: 
            flag = 0;
            printf("Enter a Number for Search : ");
            scanf("%d",&key);
            for ( i = 0; i < n; i++)
            {
                if(key == a[i])
                {
                    flag = 1;
                    break; //for loop
                }
            }
            if(flag)
                printf("%d is Found !!",key);
            else 
                printf("%d is Not Found !!",key);
            break;

            //inserting element in aaray start
            case 3:   
                  printf("enter a position");
                  scanf("%d",&pos);
                  printf("enter a key");
                  scanf("%d",&key);

                  for(i=n;i>=pos;i--)
                  a[i]=a[i-1];
                  a[pos-1]=key;
                  n++;

                  printf("after element inserting array=");
                  for(i=0;i<n;i++)
                  printf("\n%d",a[i]);
                  break;

                  case 4: //delete a single element from array
                        printf("enter a number for delition");
                        scanf("%d",&key);
                        for(i=0;i<n;i++)
                        {
                            if(key==a[i])
                            for(j=i;j<n;j++)
                            a[j]=a[j+1];

                            n--;
                            break;
                        }
                        printf("after number delition array=");
                        for ( i = 0; i <n; i++)
                        printf("%d",a[i]);
                        break;

                        case 5:
                        printf("enter a key");
                        scanf("%d",&key);
                         for(i=0;i<n;i++)
                         {
                            if(a[i]==key)
                            count++;
                         }
                        if(count==0)
                        printf("no is not present in array");
                        else
                        printf("number count=%d",count);
                        return 0;
                        break;

                        case 6:
                        for(i=0;i<n/2;i++)
                         {
                         temp=a[i];
                         a[i]=a[n-i-1];
                         a[n-i-1]=temp;
                         }
                         printf("reverce array=");
                         for ( i = 0; i <n; i++)
                         printf("%d",a[i]);                   
                         break;

                         case 7:
                         break;


                         default:
                         printf("Invalid Choice !!");
                         break;
        }
    }
}