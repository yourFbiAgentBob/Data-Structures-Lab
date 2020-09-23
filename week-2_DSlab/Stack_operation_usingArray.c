#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define STACK_SIZE 5
int top=-1, flag=1;
int s[10];
int item;

void push()
{
    if(top == STACK_SIZE-1)
    {
        printf("stack overflow!!!! \n");
        return;
    }
    
    top++;
    s[top]= item;
}

int pop()
{
    
    if(top==-1)
    {
        return -1;
    }
    return s[top--];
}

void display()
{
    int i;
    if(top== -1)
    {
        printf("empty stack \n");
        return;
    }
    printf("contents of the stack are: \n");
    for(i=0;i<top;i++)
      {  printf("%d\n", s[i]);
      }
     printf("\n")  ;
        
}

void main()
{
    int item_deleted, choice;
    system("clear");
    while(flag==1)
    {
        printf("enter the choice(1-push 2-pop 3-display, 4 to exit) \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("enter an item to be entered \n");
                    scanf("%d", &item);
                    push();
                    printf("%d was entered into the stack.\n", item);
                    display();
                    break;
            case 2: item_deleted= pop();
                    if (item_deleted == -1)
                    {
                        printf("empty stack \n");
                    }
                    else
                    {
                        printf("the item deleted is %d \n", item_deleted);
                    }
                    printf("The stack is :\n");
                    display();
                    break;
            case 3: display();
                    break;
                    
            case 4 :  flag =0;
            break;
            default : printf("invalid choice\n");
        }
    }
    
}
