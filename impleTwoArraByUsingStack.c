#include<stdio.h>
#define MAXSIZE 20

// write a program that implement two stacksusing single array 
int array[MAXSIZE];
int top1=-1;
int top2=MAXSIZE;

//function to push data into stack1
void push1(int data)
{
    //cheaking the overflow condition
    if(top1<top2-1)
    {
        top1++;
        array[top1]=data;
    }
    else{
        printf("Stack is ful");
    }
}

//fuction to push data into stack2
void push2(int data)
{
    //cheacking overflow condition
    if(top1<top2-1)
    {
        top2--;
        array[top2]=data;
    }
    else
    {
        printf("Stack is full. \n");
    }
}

//function to pop data from the stack1
void pop1(){
    //checking the underflow condition
    if(top1>=0)
    {
        int popped_element=array[top1];
        top1;

        printf("%d is being popped from Stack 1\n",popped_element);
    }
    else{
        printf("stack is empty\n");
    }
}

//function to remove the element from the stack2
void pop2()
{
    //cheaking underflow condition 
    if(top2<MAXSIZE){
        int popped_element=array[top2];
        top2--;
        printf("%d is being popped from stack 1 \n",popped_element);
    }
    else
    {
        printf("stack is empty\n");
    }
}

//function to print the value of stack1
void display_stack1(){
    int i;
    for(i=top1;i>=0;--i){
        printf("%d", array[i]);
    }
    printf("\n");
}

//Function to print the value of stack2
void display_stack2(){
    int i;
    for(i=top2;i<MAXSIZE;++i)
    {
        print("%d",array[i]);
    }
    print("\n");
}

int main(){
    int arr[MAXSIZE];
    int i;
    int num_of_ele;

    printf("we can push a total values\n");

    //number of element pushed in stack 1 is 10
    //Numbwer of element pushed in stack2 is 10

    //loop to insert the element into stack1
    for(i=1;i<=10;++i){
        push1(i);
        printf("value pushed in stack 1 is %d\n",i);

    }
    //llop to insert the element into Stack2
    for(i=11;i<=20;++i){
        push2(i);
        printf(" value pushed in stack2 is %dd\n",i);
    }


    //print both stack
    display_stack1();
    display_stack2();

    //pushing on stack full
    printf("pushing value in stack 1 is%d\n",11);
    push1(11);

    //poping all element from stack 1
    num_of_ele=top1+1;
    while (num_of_ele)
    {
       pop2();
       -num_of_ele;
    }

    //trying to pop the element from the empty stack
    pop1();

    return 0;
    
}