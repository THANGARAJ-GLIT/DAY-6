#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter the number of elements in array A: ");
    scanf("%d", &size1);
    printf("Enter Array A Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter the number of elements in array B: ");
    scanf("%d", &size2);
    printf("Enter Array B Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    getch();
    return 0;
}
