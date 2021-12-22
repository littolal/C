#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
void st()
void qu()
void main()
{
    int cho;
    do{
        printf("Enter required action: 1.Stack 2.Queue 3.Exit\n")
        scanf("%d",&cho);
        switch(cho)
        {
            case 1:st();
                    break;
            case 2:qu();
                    break:
            case 3:exit(0);
            default:printf("Invalid entry\n");
                    break;
        }
    }while(cho!=3)
}
//Function for stack implementation
void st()
{
    int ch;
    int top=-1;
    do{
        printf("Choose Action: 1.PUSH 2.POP 3.DISPLAY 4.EXIT\n");
        scanf("%d",ch);
        switch(ch)
        {
            case 1:
        }
    }
}
