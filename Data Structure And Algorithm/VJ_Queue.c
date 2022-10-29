#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 7
int que[MAX];
int front=-1,rear=-1;

void enqueue(){
    int value;
    printf("\n Enter the number to be added to the queue :");
    scanf("%d",&value);
    if(rear!=(MAX-1)){
        if(front==-1 && rear==-1){
            front=rear=0;
            //que[rear]=value;
        }
        que[rear]=value;
        rear++;
    }
    else{
        printf("The Queue is FULL.");
    }
}
void dequeue(){
    if(rear<front || front==-1){
        printf("The Queue is EMPTY.");
    }
    else{
        printf("The element deleted is : %d",que[front]);
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}
int peek(){
    if(front==-1){
        printf("Queue is EMPTY.");
    }
    printf("Value stored at the front of the queue : %d",que[front]);
}
void display(){
    if(front==-1){
        printf("Queue is EMPTY.");
    }
    for(int i=front;i<rear;i++){
        printf("\n %d",que[i]);
    }
}

void main(){
    int choice,value;
    do{
        printf("\n Stack Operations :");
        printf("\n 1. Enqueue ");
        printf("\n 2. Dequeue ");
        printf("\n 3. Peek ");
        printf("\n 4. Display ");
        printf("\n 5. Exit");
        printf("\n Enter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\n Enter valid choice!");
                break;
        }
    }while(choice!=5);
}