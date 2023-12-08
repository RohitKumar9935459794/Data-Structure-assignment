#include<stdlib.h>
#include<stdio.h>

#define MAX_SIZE 100
// ass4. write a program that implement two stack using a single array
//run successfully
int stack[MAX_SIZE];
int top1 = -1, top2 = MAX_SIZE;

//push(int stack_num,int val) is function to push in stack1 and stack2 both
//when stack_num=1 then  vlaue push in stack1
//when stack_num=2 then value push in stack2
void push(int stack_num, int val) {
    if (top1 + 1 == top2) {
        printf("Overflow stack!\n");
        return;
    }
    if (stack_num == 1) {
        top1++;
        stack[top1] = val;
    } else {
        top2--;
        stack[top2] = val;
    }
}

void show(){
    printf("the stack is");
    for(int i=0;i<MAX_SIZE-1;i++){
        printf(stack[i]);
    }
}

//pop(int stack_num) is function to pop in stack1 and stack2 both
//when stack_num=1 then  vlaue pop in stack1
//when stack_num=2 then value pop in stack2
int pop(int stack_num) {
    if (stack_num == 1) {
        if (top1 == -1) {
            printf("Empty stack!\n");
            return -1;
        }
        int val = stack[top1];
        top1--;
        return val;
    } else {
        if (top2 == MAX_SIZE) {
            printf("Stack Underflow\n");
            return -1;
        }
        int val = stack[top2];
        top2++;
        return val;
    }
}

int main() {
    //program is running but by enter value like push(1,1) but didnot taking user input
   /* push(1, 1);
    push(1, 2);
    push(1, 3);
    push(2, 10);
    push(2, 20);
    push(2, 30);
    show();
    printf("%d popped from stack 1\n", pop(1));
    printf("%d popped from stack 1\n", pop(1));
    printf("%d popped from stack 1\n", pop(1));
    printf("\n%d popped from stack 2\n", pop(2));
    printf("%d popped from stack 2\n", pop(2));
    printf("%d popped from stack 2\n", pop(2));
    return 0;*/
    int stack_num,value;
    int flag=1;
    int choice;
    do{
    printf("enter your choice");
    printf("  \n 1.push  \n 2. pop \n 3. show");
    scanf("%d",&choice);
    switch(choice){
    case 1: printf("\nenter the stack_num and value");
          scanf("%d , %d",&stack_num,&value);
          push(stack_num,value);
          break;
    case 2: printf("enter the stack_num ");
         scanf("%d ",&stack_num);
         pop(stack_num);
          break;
    case 3: show();
           break;
    case 4: flag=0;
        printf("existing stack");
           break;       
    default : printf("invalid choice");
    };
    }while (flag==1);
    
   return 0; 
}
