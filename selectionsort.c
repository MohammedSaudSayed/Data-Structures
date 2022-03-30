// Selection Sort

#include <stdio.h>
void SS(int arr[], int n);
int Smallest(int arr[], int n, int k);

int main()
{
    int arr[10], i, n;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    SS(arr, n);
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void SS(int arr[], int n)
{
    int k, pos, temp;
    for (k = 0; k < n; k++)
    {
        pos = Smallest(arr, n, k);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }
}

int Smallest(int arr[], int n, int k)
{
    int pos = k, Small = arr[k], i;
    for (i = k+1; i < n; i++)
    {
        if (arr[i] < Small)
        {
            Small = arr[i];
            pos = i; 
        }
    }
    return pos;
}