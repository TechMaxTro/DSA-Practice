#include<stdio.h>
#include<stdlib.h>
#define val 5
int queue[val];
int front=-1;
int rear=-1;
void insert(){
     int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == val-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear++;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");    

}
void delete(){
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front++;  
        }  
        printf("\nValue deleted\n");  
    }  
}
void display(){
     int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nPrinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("|%d|",queue[i]);  
        }     
    }  
}
int main(){
    int choice;
    while (1)
    {
        printf("\n************MENU************ \n");
        printf("1.Enter 1 to insert element to queue \n");
        printf("2.Enter 2 to delete element from queue \n");
        printf("3.Enter 3 to display all elements of queue \n");
        printf("4.Enter 4 to quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("Wrong choice \n");
        } 
    } 
}