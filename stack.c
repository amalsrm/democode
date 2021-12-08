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
void main()
{
    int stack[10],top=-1,value,val,n;
    printf("Enter the size of the stack: \n");
    scanf("%d",&n);
    printf("Enter the values to the stack: \n");
    scanf("%d",&value);
    for (int i = 0; i < n; i++)
    {
        while (top<n)
        {
            top=top+1;
            stack[top]=value;
        }
        
    }
}
    
