#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size],rear=-1,item,front=-1,i;
void insert();
int delete();
void display();
void main()
{

    int choice,del;
    while(1)
    {
        printf("1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {

            case 1: insert();
            break;
            case 2: del=delete();
            printf("Deleted element =%d\n",del);
            break;
            case 3:display();
            break;
            case 4: exit(0);
            break;
            default: printf("Wrong choice\n");
        }
    }
}
void insert()
{
    if(rear==size-1)
    {

        printf("Queue is full\n");
        return;
    }
    else
    {
        printf("Enter the element:");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else
        rear++;
        queue[rear]=item;
    }

    }
    void display()
    {
        if(front==-1 && rear==-1)
        {
            printf("Queue is empty\n");
            return;

        }
        for(i=front;i<=rear;i++)
            printf("%d\t",queue[i]);
    }
    int delete()
    {

        if(front==-1 && rear==-1)
        {
            printf("Queue is empty\n");
            return;
        }
        int d=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front+=1;
        return d;
    }







