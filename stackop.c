#include<stdio.h>
#include<stdlib.h>
    void showagain(int c,int val,int stack[],int n,int top)
    {
    printf("Enter the choice: \n");
    printf("1.insertion\n2.deletion\n3.display\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("Enter the value to insert:\n");
        scanf("%d",&val);
        insert(val,stack,top,n);
        top++;
        show(top,stack);
        showagain(c,val,stack,n,top);
        break;
    case 2:delete(top,stack);
        top--;
        show(top,stack);
        showagain(c,val,stack,n,top);
        break;
    case 3:show(top,stack);
        break;
    default:
        break;
    }
    }
void insert(int val,int stack[],int top,int n)
{
    if (top<5)
    {
      top++;
      stack[top]=val;  
    }
    else
    {
        printf("Stack is full");
    }
}
void show(int top,int stack[])
{
    int temp=top;
    while (temp!=-1)
    {
        printf("%d\n",stack[temp]);
        temp--;
    } 
}
void delete(int top,int stack[])
{
    if (top!=-1)
    {
        top--;
    }
    else
    {
        printf("Stack is empty");
    }
    
}
void main()
{
    int stack[6],top=-1,value,val,n,c;
    printf("Enter the size of the stack: \n");
    scanf("%d",&n);
    printf("Enter the values to the stack: \n");
    for (int i = 0; i < n; i++)
    {
        while (top<n-1)
        {
            top++;
            scanf("%d",&value);
            stack[top]=value;
        }
        
    }
    show(top,stack);
    showagain(c,val,stack,n,top);
}
    
