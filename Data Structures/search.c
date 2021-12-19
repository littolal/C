//Menu driven program for Linear and Binary search
#include<stdio.h>
void lin(int v,int n,int *a);
//void bin(int v,int n,int a);
void main()
{   int n,a[100],cho,v,c;

    //Accepting array elements
    printf("Enter number of elements of array:\n");
    scanf("%d",&n);

    printf("Enter the %d elements of array:\n",n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    //Menu
    do
    {
        printf("Please choose desired action: 1. Linear search 2.Binary search 3.Exit\n");
        scanf("%d",&cho);
        switch(cho)
                {
                    case 1: printf("Enter value for searching:\n");
                            scanf("%d",&v);
                            lin(v,n,a);
                            break;
                 /* case 2: printf("Enter value for searching:\n");
                              scanf("%d",&v);
                              bin(v,n,a);
                              break;
                    case 3: exit(0);*/
                    default:printf("Invalid option\n");
                            break;        
                }
        printf("If you wish to search again,Press 1 or Press any other key:\n");
        scanf("%d",&c);
    }while(c==1);
}
//Function for linear search
void lin(int v,int n,int *a)
{
    int flag=0;
    int i;
    for(i=0;i<n;i++)
    {
        if (v==a[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    printf("Element found at %d:\n",i+1);
    else
    printf("Element not in array.\n");
}