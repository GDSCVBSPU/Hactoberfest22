#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
int st[MAXSIZE],top=-1;
void push(int st[], int value){
    if(top==MAXSIZE-1){
        printf("\n Overflow");
    }
    else{
        top++;
        st[top]=value;
    }
}

int pop(int st[]){
    if(top==-1){
        printf("\n Underflow");
        return 0;
    }
    top--;
    return st[top+1];
}

int peek(int st[]){
    if(top==-1){
        printf("\n Stack is empty");
        return 0;
    }
    return st[top];
}

void display(int st[]){
    if(top==-1){
        printf("\n Stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("\n %d \n",st[i]);
        }
    }
}

void main(){
    int choice=0,value;
    do{
        printf("\n Stack Operations :");
        printf("\n 1. Push ");
        printf("\n 2. Pop ");
        printf("\n 3. Peek ");
        printf("\n 4. Display ");
        printf("\n Enter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("\n Enter the number to be added to the stack :");
                scanf("%d",&value);
                push(st,value);
                break;
            case 2:
                value=pop(st);
                printf("Item removed from the stack : %d",value);
                break;
            case 3:
                value=peek(st);
                printf("Value stored at the top of the stack : %d",value);
                break;
            case 4:
                display(st);
                break;
            default:
                printf("\n Enter valid choice!");
                break;
        }
    }while(choice<5);
    

}