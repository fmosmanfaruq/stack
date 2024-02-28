#include<stdio.h>
#include<stdlib.h>

int arr[5];
int top=-1;

void push(int data)
{
    if(top==5-1)
    {
        printf("Stack overflow");
    }
    else{
        top++;
        arr[top]=data;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    for(int i=top;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
