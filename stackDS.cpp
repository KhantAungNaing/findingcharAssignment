#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

struct stack{
    int data[MAXOFSTACK];

    int top;
};
int toCount=0;
typedef struct stack st;

int ifstackFull(st *myStack){
    if(myStack->top==MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }
}

int ifstackEmpty(st* myStack){
    if(myStack->top==-1){
        return -1;
    }else{
        return 0;
    }

}

void create_emptyStack(st *myStack){
    myStack->top=-1;

}

void pushtoStack(st *myStack, int value){
    if(ifstackFull(myStack)){
        printf("Stack is Full!");
    }else{
        myStack->top++;
        myStack->data[myStack->top]=value;
    }
    toCount++;
}

void popfromStack(st*myStack){
    if(ifstackEmpty(myStack)){
        printf("Stack is Empty");
    }else{
        printf("Pop from stack data is : %d\n",myStack->data[myStack->top]);
        myStack->top--;
    }
    toCount--;
}

void printStack(st *myStack){
    int i;
    for(i=myStack->top;i>=0;i--){
        printf("Stack Data in array :%d\n",myStack->data[i]);

    }

}

int main(){

    st *myStack=(st*)malloc(sizeof (st));

    create_emptyStack(myStack);
    pushtoStack(myStack,10);
    pushtoStack(myStack,20);
    pushtoStack(myStack,30);
    pushtoStack(myStack,40);
    pushtoStack(myStack,50);

    printStack(myStack);

    popfromStack(myStack);
    popfromStack(myStack);
    popfromStack(myStack);
    popfromStack(myStack);
    popfromStack(myStack);

    return 0;
}