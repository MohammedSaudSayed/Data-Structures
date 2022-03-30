#include<stdio.h>
#define max 5

int main()
{
    int i, n, data;
    int arr[5];

    printf("Enter the number of elements in array:\n ");
    scanf("%d", &n);

    printf("Enter the value of elements:\n ");
     for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Searched Element: ");
    scanf("%d", &data);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("Element found at position %d", i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("Element not found.\n");
    }
}