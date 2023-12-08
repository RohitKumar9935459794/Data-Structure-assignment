#include<stdio.h>
# define MAXSIZE 10

int array[MAXSIZE],front,rear;
front=-1;
rear=-1;

void inqueue(int value){
    if(rear==MAXSIZE-1)
    printf("queue is full");
    else if(rear==-1)
    rear=front=0;
    else{
        rear++;
        array[rear]=value;
        printf(" Inqueue is successful");
    }
}

int dequeue(){
    if(rear==-1)
    printf("queue is empty");
    else if(front==rear)
    front=rear=-1;
    else{
        front++;
        printf(" you dequeued the element is",array[front]);

    }
}

void show(){

}

int main()
{
    int choice, value, flag=1;
    do
    {
         (" enter your choice you want");
    printf("\n 1. inqueue  \n 2. dequeue  \n 3. show  \n 4. exit");
    scanf("%d",&choice);
  
    switch (choice)
    {
    case 1:printf(" enter the value you want to inqueue");
           scanf("%d",&value); 
           inqueue(value);
        break;
    case 2: dequeue();
    break;

    case 3: show();
    break;

    case 4: flag=0;
    break;    
    
    default:
        break;
    }
    } while (flag==1);
   
    return 0;
}
