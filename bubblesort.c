#include <stdio.h>
int main()
{
    int arr[10];
    int i, j, n, temp;
    printf("Please Enter the number of Elements in array:\n ");
    scanf("%d", &n);

    printf("Enter the value of elements:\n ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("Doing Bubble Sort....\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After Sorting...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}