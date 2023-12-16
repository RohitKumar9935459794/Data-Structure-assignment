#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 // write a function for the evalution of postfix
//run successfully
struct Stack{
	int top;
	int *array;
	unsigned c;                               
};
struct Stack* createStack(unsigned c){
 struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
 stack->top=-1 ;
 stack->c=c  ;
 stack->array=(int*)malloc(stack->c*sizeof(int));
  if(!stack->array)
   return NULL;
  return stack;                  
}

// here cheacking that the stack is empty or not
int isEmpty(struct Stack* stack){
  stack->array[stack->top]==-1;	
}

// peek use for display the stack
char peek(struct Stack* stack){
	stack->array[stack->top];
}

// pop to push out the element from the stack
char pop(struct Stack* stack){
	if(!isEmpty(stack))
	   return stack->array[stack->top--];
	return '$';
}

// push function used to push the element in the stack
void push(struct Stack* stack,char op ){
	stack->array[++stack->top]=op;
}

// here is the function to evaluate the postfix expression
int evalPostfix( char* exp){
	struct Stack* stack=createStack(strlen(exp));
	int i;
	if(!stack)
	return -1;
	
	for(i=0; exp[i];++i){
		if(isdigit(exp[i]))
		  push(stack ,exp[i]- '0');
    	else{
		 int val1=pop(stack);
		 int val2=pop(stack);
		switch(exp[i]){
			case '+':
			push(stack,val1+val2);
			break;
			case '-':
			push(stack,val1-val2);
			break;
			case '/':
			push(stack,val1/val2);
			break;
			case '*':
			push(stack,val1*val2);
			break;
		}
	  }
    }return pop(stack);
}

 main(){
 char exp[]="124*+";	
 printf("the evaluation of postfix%d",evalPostfix(exp));
 return 0;
}