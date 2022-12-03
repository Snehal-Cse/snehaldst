#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size], rear=-1, item,front=-1;
void insert();
int delete();
void display();
void main()
{
int choice,del;
while(1)
{
 printf("1. insert 2. delete 3. display  4. exit\n");
 printf(" enter your choice:");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1: insert ();
 break;
 case 2: del=delete();
 printf("delete element=%d\n",del);
 break;
 case 3: display();
 break;
 case 4:exit(0);
 break;
 default: printf("wrong choice\n");
 }
}
}
void insert()
{

    if (rear==size-1)
    {
        printf("queue is full\n");
        return;
    }
    else
    {
        printf("enter the element:");
        scanf("%d", &item);
        if (front==-1 && rear==-1)
        {
            front =0;
            rear=0;
        }
        else
        rear++;
        queue[rear]=item;
    }

}
void display ()
{

    if (front ==-1 && rear == -1)
    {
        printf("queue is empty\n");
        return;
    }
    for (int i=front; i<=rear; i++)
        printf("%d\t",queue[i]);
}
int delete ()
{


    if (front ==-1 && rear == -1)
    {
        printf("queue is empty\n");
        return;
    }
    int d=queue[front];
    if (front==rear)
    {
        front=-1;
        rear==-1;
    }
    else
        front+=1;
    return d;
}





