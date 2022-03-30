#include <stdio.h>
#define MAX 5

int st[MAX];
int top = -1;

// function declaration
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main()
{
    push(st, 5);
    push(st, 1);
    push(st, 7);
    push(st, 9);
    push(st, 3);
    push(st, 10);
    display(st);
    printf("\nthe peeked element is %d\n", peek(st));
    printf("the deleted element is %d\n", pop(st));
    printf("the peeked element is %d\n", peek(st));
    printf("the deleted element is %d\n", pop(st));
    printf("the peeked element is %d\n", peek(st));
    printf("the deleted element is %d\n", pop(st));
    printf("the peeked element is %d\n", peek(st));
    printf("the deleted element is %d\n", pop(st));
    printf("the peeked element is %d\n", peek(st));
    printf("the deleted element is %d\n", pop(st));
    display(st);
    return 0;
}

void push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("overflow condition\n");
    }
    else
    {
        top++;
        st[top] = val;
        printf("Elements inserted successfully %d\n", val);
    }
}
void display(int st[])
{
    int i;
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("elements in stack are: ");
        for (i = MAX - 1; i >= 0; i--)
        {
            printf("%d\t", st[i]);
        }
    }
}

int peek(int st[])
{
    if (top == -1)
    {
        printf("\nstack is empty\n");
        return -1;
    }
    else
    {
        return st[top];
    }
}
int pop(int st[])
{
    int val;
    if (top == -1)
    {
        printf("Underflow condition that is stack is empty");
    }
    else
    {
        val = st[top];

        top--;
        return val;
    }
}