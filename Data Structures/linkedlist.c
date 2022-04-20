#include<stdio.h>
#include<stdlib.h>
void inbeg();
void inbet();
void inend();
void dbeg();
void dbet();
void dend();
void reverse();
void display();

//creating node
struct node{
    int data;
    struct node *link;    
};

//declaring head 
struct node *head;

//Main function
void main(){
    head = (struct node*)malloc(sizeof(struct node));
    head = NULL;
            int ch;
    do{
        printf("1.Insertion at beginning 2.Insertion in between 3.Insertion at end 4.Deletion from beginning 5.Deletion from between 6.Deletion at end 7.Display 8.Reverse 9.Exit \n");
        scanf("%d",&ch);
        switch(ch){
            case 1: inbeg();
                    break;
            case 2: inbet();
                    break;
            case 3: inend();
                    break;
            case 4: dbeg();
                    break;
            case 5: dbet();
                    break;
            case 6: dend();
                    break;
            case 7: display();
                    break;
            case 8: reverse();
                    break;
            case 9: exit(0);
            default: printf("Invalid option\n");
        }
    }while(ch!=9);
}

    //function for insertion at beginning
    void inbeg()
    {
        struct node* ptr = (struct node*)malloc(sizeof(struct node));
        if(ptr == NULL){
        printf("Memory not available\n");
        return;
    }
        printf("Enter Element for insertion:\n");
        scanf("%d",&ptr->data);
        ptr->link=head;
        head=ptr;
    }

    //function for insertion in between
    void inbet()
    {
        struct node* ptr=head;
        int key;
        int flag =0;
        struct node* ptr2=(struct node*)malloc(sizeof(struct node));
        printf("Enter element for insertion:\n");
        scanf("%d",&ptr2->data);
        printf("Enter element after which %d is to be inserted:\n",ptr2->data);
        scanf("%d",&key);
        while(ptr->data!=key)
        {
            ptr=ptr->link;
        }
        if(ptr->data=key)
        {
            ptr2->link=ptr->link;
            ptr->link=ptr2;
            flag++;
        }
        if(flag==0)
            printf("Key not found.\n");
    }

    //function for insertion at end
    void inend()
    {
        struct node* ptr =(struct node*)malloc(sizeof(struct node)); 
        ptr=head;
        struct node* ptr2 = (struct node*)malloc(sizeof(struct node));
        printf("Enter Element for insertion:\n");
        scanf("%d",&ptr2->data);
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }  
        ptr2->link=NULL;
        ptr->link=ptr2;
    }

    //function for deleting from beginning
    void dbeg()
    {
        if(head==NULL)
            printf("List is empty\n");
        else
        {
            struct node* ptr=head;
            head=head->link;
            free(ptr);
            ptr=NULL;
        }
    }

    //function for deletion from between
    void dbet()
    {
        if(head==NULL)
            printf("List is empty\n");
        else
        {
            struct node* ptr=head;
            struct node* ptr2=head;
            int key=0;
            printf("Enter key to be deleted\n");
            scanf("%d",&key);
            while(ptr->link!=NULL&&ptr->data!=key)
            {
                ptr2=ptr;
                ptr=ptr->link;
            }
            if(ptr->data==key)
            {
                ptr2->link=ptr->link;
                free(ptr);
                ptr=NULL;
                printf("Key deleted\n");
            }
            else if(ptr->link==NULL)
            {
                printf("Key does not exist\n");
                return;
            }
        }
    }
    //function for deletion from end
    void dend()
    {
         if(head==NULL)
            printf("List is empty\n");
        else if (head->link==NULL)
        {
            free(head);
            head=NULL;
        }
        else
        {
            struct node* ptr=head;
            struct node* ptr2=head;
            while(ptr->link!=NULL)
            {
                ptr2=ptr;
                ptr=ptr->link;
            }
            ptr2->link=NULL;
            free(ptr);
            ptr=NULL;
        }
    }

    //function for display
    void display()
    {   
        if(head==NULL)
            printf("List is empty\n");
        else{
            struct node* ptr=head;
            while(ptr!=NULL)
            {
                printf("%d ",ptr->data);
                ptr=ptr->link;
            }
            printf("\n");
        }
    }

    //function for reversing list
    void reverse()
    {
        
    }