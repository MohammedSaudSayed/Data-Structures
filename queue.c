#include<stdio.h>
#define max 5

int queue[max];
int front = -1;
int rear = -1;
void insert();

int main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();

    return 0;
}

void insert()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (rear = max - 1)
    {
        printf("Overflow Condition.\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else
    {
        rear++;
        queue[rear] = num;
    }
}