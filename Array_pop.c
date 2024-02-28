#include<stdio.h>
#include<stdlib.h>
#define max 10

int stack[max];
int top=-1;

//for pushing 
void push(int data)
{
    if(top==max)
    {
        printf("stack is overflow");
        return;
    }
    top=top+1;
    stack [top]=data;
    printf("%d\n",data);

}
//for poping
int pop()
{
    if(top<0)
    {
        printf("stack is enmpty ");
        return -1;
    }
    return stack [top--];
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    printf("%d",pop());
    printf("%d",pop());
    printf("%d",pop());
    

    return 0;
}

