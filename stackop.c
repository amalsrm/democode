#include<stdio.h>
#include<stdlib.h>
void insert(int val,int stack[10],int top)
{
    top=top+1;
    if (top<8)
    {
      stack[top]=val;  
    }
    else
    {
        printf("Stack is full");
    }
}
void display(int top,int stack[])
{
    while (top!=-1)
    {
        top--;
        printf("/n%d",stack[top]);
    } 
}
void main()
{
    int stack[10],top=-1,value,val,n,temp;
    printf("Enter the size of the stack: \n");
    scanf("%d",&n);
    printf("Enter the values to the stack: \n");
    for (int i = 0; i < n; i++)
    {
        while (top<n-1)
        {
            top=top+1;
            scanf("%d",&value);
            stack[top]=value;
        }
        
    }
    temp=top;
    display(temp,stack);
}
    
