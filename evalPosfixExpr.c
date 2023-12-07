#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// here i am  creating a structure of stack
//with top, capacity and pointer array 
struct Stack
{
    int top;
    unsigned capacity;
    int*  array;
};

// stack operation
struct Stack* createStack(unsigned capacity)
{
    // creating a stack variable of by using structure type
    struct Stack* stack =(struct Stack*)malloc(sizeof(struct Stack));
    if(!stack)
    return NULL;
    stack->top=-1;
    stack->capacity=capacity;
    //seting array pointer at the stack with size of capacity
    stack->array=(int*)malloc(stack->capacity*sizeof(int));
    //if stack array is not available it return NULL
    if(!stack->array)
    return NULL;
    return stack;
};

//isEmpty is function creationg for cheack stack is emptyor not
int isEmpty(struct Stack* stack){
 return stack->top==-1;
}

//creating function for printing whole array or Stack
char peek(struct Stack* stack){
return stack->array[stack->top];
}

//creating push function is for entering the data in stack
char push(struct Stack* stack, int value){
// here top is increasing top by stack->array[stack->top++] 
    return stack->array[stack->top++]=value;

}

//creating pop function for poping element 
char pop(struct Stack* stack){
    if(!isEmpty(stack))
    //here top is decreasing top by stack->array[stack->top--]
    return stack->array[stack->top--];
    return '$';
}

// here evaluating the postfix function
int evalutePostfix(char* exp)
{
    struct Stack* stack=createStack(strlen(exp));
    int i;


    if(!stack)
    return -1;

    for ( i = 0;exp;++i){
        if(isdigit(exp[i]))
        push(stack,exp[i]- '0');

        else{
            // evaluating the postfix with operation
            int val1=pop(stack);
            int val2=pop(stack);
            switch(exp[i]){
                case '+':
                push(stack, val2+val1);
                break;
                case '-':
                push(stack,val2-val2);
                break;
                case'*':
                push(stack,val1*val2);
                break;
                case'/':
                push(stack,val1/val2);
                break;
            }
        }
    }
    return pop(stack);    
}

int main(){
    char exp[]="231*+-";

    printf("postfix evalution :%d",evalutePostfix(exp));
}


