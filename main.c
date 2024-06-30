/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;
void push(int);
void pop();
void display();
int is_empty();
int is_full();
int main()

{
    int choice,data;
    while(1)
    {
        printf("\nEnter \n1 for Push \n2 for Pop\n3 for Peek\n4 for Display\n5 for Exit: ");
        scanf("%d",&choice);
    
        switch(choice)
        {
            case 1:
            printf("\nEnter data: ");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            pop();
            break;
            case 3:
            if(!is_empty())
            {
                printf("\nTop element is %d",stack[top]);
            }
            else
            {
                printf("Stack underflow");
            }
            break;
            case 4:
            display(stack);
            break;
            case 5:
            return 0;
            break;
            default:
            printf("\n Invalid Input");
        }
    }
    

    return 0;
}
int is_empty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full()
{
    if(top == SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int val)
{
    if(is_full())
    {
        printf("\nStack Overflow");
        return;
    }
    top++;
    stack[top] = val;
    printf("\n%d has been pushed successfully",stack[top]);
}
void pop()
{
    if(is_empty())
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\n%d has been popped successfully",stack[top]);
        top--;
    }
}
void display()
{
    if(is_empty())
    {
        printf("Stack is empty and has no elements to display");
    }
    else{
        int i;
        for(i=0;i<=top;i++)
        {
            printf("%d\t",stack[i]);
        }
    }
    
}


