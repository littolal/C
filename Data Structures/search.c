//Menu driven program for Linear and Binary search
#include<stdio.h>
#include<stdlib.h>
void lin(int v,int n,int *a);
void bin(int v,int n,int *a);
void main()
{   int n,a[100],cho,v,c;

    //Accepting array elements

    printf("Enter number of elements of array:\n");
    scanf("%d",&n);
    //Initializing array elements

    printf("Enter the %d elements of array:\n",n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    //Menu for Searching

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
                   case 2: printf("Enter value for searching:\n");
                              scanf("%d",&v);
                              bin(v,n,a);
                              break;
                    case 3: exit(0);
                    default:printf("Invalid option\n");
                            break;        
                }
    }while(cho!=3);
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
//Function for binary search
void bin(int v,int n,int *a)
{
    int temp;
    //Bubble sort
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int f=0;
    int l=n-1;
    int mid=(f+l)/2;
    while(f<=l)
    {
        if (a[mid]<v)
        f=mid+1;
        else if (a[mid]==v)
        {
            printf("Element is in the array\n");
            break;
        }
        else
        l=mid-1;
        mid=(f+l)/2;
    }
    if(f>l)
    printf("Given element is not in the array\n");
}