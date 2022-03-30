// Binary Search using Bubble Sort

#include<stdio.h>
#define max 10
void display(int a[], int n);
void bubblesort(int a[], int n);

int main()
{
    int a[max], i, n, num, beg = 0, mid, end, found = 0;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the numbers of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubblesort(a, n);
    display(a, n);
    printf("\nEnter Searched Element: ");
    scanf("%d", &num);
    end = n - 1;

    while(beg < end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == num)
        {
            printf("Element found at %d", mid + 1);
            found = 1;
            break;
        }

        else if(a[mid] > num)
        {
            end = mid - 1;
        }

        else
        {
            beg = mid + 1;
        }
    }

    if (found == 0)
    {
        printf("Element Not Found");
    }
    return 0;
}

void bubblesort(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void display(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}