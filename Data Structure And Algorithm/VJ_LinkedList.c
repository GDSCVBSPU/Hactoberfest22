#include<stdlib.h>
#include<stdio.h>

typedef struct  Node {
    int data;
    struct Node *next;
} Node;

Node *head=NULL;

int findLastNode(){
    int i=1;
    Node *temp=head;
    while(temp->next!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}

void insert(int pos){
    int val;
    Node *temp,*newnode,*prev=NULL;
    newnode=(Node*)malloc(sizeof(Node));
    printf("\nEnter the data you want to insert : ");
    scanf("%d",&val);
    if(pos==1 && head==NULL){
        head=newnode;
        newnode->data=val;
        newnode->next=NULL;
        return;
    }
    if(pos==1){
        newnode->next=head;
        newnode->data=val;
        head=newnode;
        return;
    }
    else{
        prev=NULL;
        temp=head;
        for(int i=1;i<pos;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=newnode;
        newnode->data=val;
        newnode->next=temp;
    }
}

void delete(int pos){
    Node *temp,*prev;
    if(head==NULL){
        printf("The list is empty");
        return;
    }
    if(pos==1){
        printf("The value at the node deleted is : %d",head->data);
        head=head->next;
        return;
    }
    else{
        prev=NULL;
        temp=head;
        for(int i=1;i<=pos;i++){
            if(i==pos){
                printf("The value at the node deleted is : %d",temp->data);
                prev->next=temp->next;
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
    }
}

void display(){
    Node *temp;
    temp=head;
    if(head==NULL){
        printf("The linked list is empty");
    }
    else{
        printf("The entire list is : ");
        while (temp->next!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
        if(temp->next==NULL)
            printf("\n%d",temp->data);
    }
}

void main(){
    int ch,pos;
    while (ch!=8){
        printf("\nSingly Linked List - ");
        printf("\n 1. Insert at begining");
        printf("\n 2. Insert at end");
        printf("\n 3. Insert at position");
        printf("\n 4. Delete at begining");
        printf("\n 5. Delete at end");
        printf("\n 6. Delete at postion");
        printf("\n 7. Display");
        printf("\n 8. Exit");
        printf("\n Enter your choice : ");
    scanf("%d",&ch);
        switch (ch){
            case 1:
                insert(1);
                break;
            case 2:
                insert(findLastNode()+1);
                break;
            case 3:
                printf("Enter the postion you want to insert the node in : ");
                scanf("%d",&pos);
                insert(pos);
                break;
            case 4:
                delete(1);
                break;
            case 5:
                delete(findLastNode());
                break;
            case 6:
                printf("Enter the postion of the node you want to delete : ");
                scanf("%d",&pos);
                delete(pos);
                break;
            case 7:
                display();
            default:
                printf("\n Enter valid choice !");
                break;
        }
    }
}
