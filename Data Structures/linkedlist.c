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

    //function for insertion in between
    void inbet()
    {
        int data,pos;
        printf("Enter element for insertion\n");
        scanf("%d",data);
        printf("Enter position to insert");
        scanf("%d",pos);
        ptr2->data=data;
        struct node* ptr=head;
        struct node* ptr2=malloc(sizeof(struct node));
        while(pos!=2){
            ptr=ptr->link;
            pos--;
        }
        ptr2->link=ptr->link;
        ptr->link=ptr2;
    }

    //function for insertion at end
    void inend()
    {
        struct node* ptr=head;
        int data;
        printf("Enter element for insertion\n");
        scanf("%d",data);
        struct node* ptr2=malloc(sizeof(struct node));
        ptr2->data=data;
        ptr2->link=NULL;
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=ptr2;
    }

    /*function for display
    void display()
    {
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->link;
        }
    }*/