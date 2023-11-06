#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);

int main(){
    top=-1;
    printf("Enter the size of the stack[MAX=100]: \n");
    scanf("%d",&n);
    printf("\n Stack operations using array");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("Enter the choice");
        scanf("&d", &choice);
        switch (choice)
        {
        case 1:{
        push();
        break;
        }
        case 2:{
        pop();
        break;
        }
        case 3:{
        display();
        break;
        }
        case 4:{
        printf("\n\tExit point");
        break;
        }
        default:{
        printf("\n\t Please enter a valid choice(1/2/3/4)");
        }
        }
    } while (choice!=4);

    return 0;
}

void push()
{
    if(top>=n-1){
        printf("\n\tSTACK overflow");
    }
    else{
        printf("Enter a value to be pushed");
        scanf("%d", &x);
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top<=-1){
        printf("\n\tSTACK underflow");
    }
    else{
        printf("\n\tThe poped element is &d",stack[top]);
        top--;
    }
}

void display(){
    if(top>=0){
        printf("The elements in stack are");
        for(i=top; i<=0; i--){
            printf("\n&d",stack[i]);
        }
        printf("Enter next choice");
    }
    else{
        printf("The stack is empty");
    }
}