/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define maxsize 15
int top, stack[maxsize];
void push();
void pop();
void peek();
void display();
int main()
{
    //struct stack obj;
    int n, c;
    do{
    printf("Enter choice from:\n 1.PUSH\n 2.POP\n 3.PEEK\n 4.DISPLAY\n 5.EXIT\n");
    scanf("%d",&n);
    switch(n)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            case 5: exit(0);
        }
        printf("Continue?\n 1.Yes\n 2.No\n");
        scanf("%d",&c);
    }while(c=1);
    return 0;
}
void push()
{
    //struct stack o1;
    int item;
    if(top>=maxsize-1)
    {
    printf("Stack overflow.");
    }
    else
    {
        printf("Enter element:\n");
        scanf("%d",&item);
        top = top+1;
        stack[top] = item;
    }
}

void pop()
{
    //struct stack o2;
    int x;
    if(top == -1)
    {
        printf("Stack underflow.");
    }
    else
    {
        x = stack[top];
        top = top-1;
        printf("The element popped is:%d\n",x);
    }
}

void peek()
{
    //struct stack o3;
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("The element at the top of the stack is:%d\n",stack[top]);
    }
}

void display()
{
   // struct stack o4;
    if(top>=0)
    {
        for(int i = top; i >= 0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
    {
        printf("Stack empty.");
    }
}








