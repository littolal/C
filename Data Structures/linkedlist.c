#include<stdio.h>
#include<stdlib.h>
//creating node

struct node{
    int data;
    struct node *link;    
}
//declaring head 

struct node *head;

//Main function
void main(){
    head = malloc(sizeof(struct node));
    do{
        printf("1.Insertion at beginning 2.Insertion in between 3.Insertion at end 4.Display 5.Exit \n");
        int ch;
        scanf("%d",&ch);
        switch(ch){
            case 1: inbeg();
                    break;
            case 2: inbet();
                    break;
            case 3: inend();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("Invalid option\n");
        }while(ch!=3);
    }
}

//function for insertion at beginning
void inbeg()
{
    int data;
    printf("Enter element for insertion:\n");
    scanf("%d",&data);
    struct node* ptr=malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=head;
    head=ptr;
}
