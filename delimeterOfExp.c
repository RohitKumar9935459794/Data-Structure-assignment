#include<stdio.h>
#include<stdlib.h>
# define bool int

//write a function to cheak the proper use of delimiter in a given expresion
struct sNodes
{
    char data;
    struct sNode* next;
};

//fuction to push an item to stack
void push(struct  sNode** top_ref, int new_data);

//function to pop an item from stack
int  pop(struct sNode** top_ref);

//Returning 1 if character1 and character2 are matching left
//and right bracket
bool  isMatchingPair(char character1,char character2)
{
    if(character1=='(' && character2== ')')
    return 1;
    else if (character1=='{'  && character2=='}')
    return 1;
    else if (character1=='['  && character2==']')
    return 1;
    else
    return 0;
}

//return 1 if expression has balanced brackets
bool areBracketsBalanced( char exp[])
{
    int i=0;

    //Declear an empty charcter stack
    struct  sNode* stack= NULL;

    // Transvese the given expression to check matching
    //breackets
    while ((exp[i]))
    {
       // if the exp[i] is a starting breaket  than push
       //it
       if (exp[i]=='{'  ||  exp[i]=='('|| exp[i]=='[')
       {
        push( &stack, exp[i]);
       }
       //if exp[i] is an ending bracket then pop from
       //stack and check if  the popped bracket is a
       //matching pair*/
    if(exp[i]=='}'||exp[i]==')'||exp[i]==']')
    {
        // If we see an ending bracket without a pair
        //then return flase
        if(stack==NULL)
        return 0 ;

        //pop the top element from stack, if  it is not
        // a pair breacket of charcter then there is a
        // mismatch
        //his happen for expression like{(})
        else if(!isMatchingPair(pop(&stack), exp[i]))
        return 0;
    }       
    i++;
    }

    //if there is some left in the expression then there
    // is a stating breacket without a closing
    //breacket
    if(stack==NULL)
    return 1;  //blaced
    else return 0; //not blanced
}

int main()
{
    char exp[100]="{()}[]";
    //fuction call
    if(areBracketsBalanced(exp))
    printf(" blanced \n");
    else printf("Not blanced \n");
    return 0;
}
// fuction to push an item  to stack
void push(struct  sNode** top_re,int new_data){
    struct  sNode* new_node=(struct sNode*)malloc(sizeof(struct sNode));
    if(new_node==NULL){
        printf("stack overflow n");
        getchar;
        exit(0);
    }
    //put in the data
    new_node->data=new_node;
    //link the old list of new node
    new_node->next=(*top_re);
    // move the head to point to the new node
    (*top_re)=new_node;

    //functio to top an item from stack
    int pop(struct sNode** top_re)
    {
        char res;
        struct sNode* top;
        if(*top_re==NULL)
        {
           printf("Stack overflow n");
           getchar();
           exit(0);
        }
        
    }
    else{
        top=*top_re;
        res=top->data;
        *top_ref=top->top->next;
        free(top);
        resturn res;
    }
    
    
}
