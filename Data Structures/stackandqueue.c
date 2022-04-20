#include<stdio.h>
#include<stdlib.h>
#define size 100
void st();
void qu();
void main()
{
    int cho;
    do{
        printf("Enter required action: 1.Stack 2.Queue 3.Exit\n");
        scanf("%d",&cho);
        switch(cho)
        {
            case 1:st();
                    break;
            case 2:qu();
                    break;
            case 3:exit(0);
            default:printf("Invalid entry\n");
                    break;
        }
    }while(cho!=3);
}
//Function for stack implementation
void st()
{
    int ch,v;
    int top=-1;
    int a[size];
    do{
        printf("Choose Action: 1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{ if(top==size-1)
                        printf("Stack overflow\n");
                    else
                    {
                        printf("Enter value for pushing:\n");
                        scanf("%d",&v);
                        top++;
                        a[top]=v;
                    }
                    break;
                    }
            case 2:{
                    if(top==1)
                        printf("Stack underflow\n");
                    else
                    {
                        printf("Element %d at position %d popped\n",a[top],top);
                        top--;
                    }
                    break;
                    }
            case 3: {
                    if(top==-1)
                        printf("Stack is empty\n");
                    else
                    {
                        printf("Stack:\n");
                        for(int i=top;i>=0;i--)
                        {
                            printf("%d\n",a[i]);
                        }
                    }
                    break;
                    }
            case 4:break;
            default:{printf("Invalid option\n");
                    break;
                    }
        }
    }while(ch!=4);
}
//Function for queue implementation
void qu()
{
    
    int ch,v;
    int f=0;
    int r=0;
    int a[size];
    do{
        printf("Choose Action: 1.Insertion 2.Deletion 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{ if(r==size)
                        printf("Queue is full\n");
                    else
                    {   if(f==0)
                        {
                            f++;
                            r++;
                        }
                    }
                    break;
                    }
            case 2:{
                    if(top==1)
                        printf("Stack underflow\n");
                    else
                    {
                        printf("Element %d at position %d popped\n",a[top],top);
                        top--;
                    }
                    break;
                    }
            case 3: {
                    if(top==-1)
                        printf("Stack is empty\n");
                    else
                    {
                        printf("Stack:\n");
                        for(int i=top;i>=0;i--)
                        {
                            printf("%d\n",a[i]);
                        }
                    }
                    break;
                    }
            case 4:break;
            default:{printf("Invalid option\n");
                    break;
                    }
        }
    }while(ch!=4);
}
