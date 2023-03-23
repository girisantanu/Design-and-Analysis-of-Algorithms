#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct pqueue
{
    int *arr;
    int len;
    int *head, *tail;
} pqueue;

int *arrcreate(int length)
{
    time_t t;
    srand((unsigned)time(&t));
    int *arr = (int *)malloc(sizeof(int) * length);
    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % length;
    }
    return arr;
}
void swap(int *a, int *b)
{

    int temp = *a;

    *a = *b;

    *b = temp;
}

void heapify(int *arr, int N, int i)
{
    int largest = i;

    // left = 2*i + 1
    int left = 2 * i + 1;

    // right = 2*i + 2
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])

        largest = left;

    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])

        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i)
    {

        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
void heapsort(int *arr, int len)
{
    for (int i = len / 2 - 1; i >= 0; i--)

        heapify(arr, len, i);

    // Heap sort
    for (int i = len - 1; i >= 0; i--)
    {

        swap(&arr[0], &arr[i]);

        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}
void bubble(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
pqueue *create()
{
    ;
}
int main()
{
    int len, c = -1;
    int *arr;
    time_t start, diff;
    // printf("enter 0 for quit\nenter 1 for create array\nenter 2 to display array\nenter 3 to sort array using heap sort\nenter 4 to sort desc\nenter 5 to display timecomplexity of sort\nenter 6 to display time complex of sorted array\nenter 7 for sorting ass to desc\nenter 8 show table\nenter 9 to show lagest number\nenter 10 to replace value \nenter 11 to insert a new element \nenter 12 to delete\n");
    while (c)
    {
        printf("enter 0 for quit\nenter 1 for create array\nenter 2 to display array\nenter 3 to sort array using heap sort\nenter 4 to sort desc\nenter 5 to display timecomplexity of sort\nenter 6 to display time complex of sorted array\nenter 7 for sorting ass to desc\nenter 8 show table\nenter 9 to show lagest number\nenter 10 to replace value \nenter 11 to insert a new element \nenter 12 to delete\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("enter length of array:");
            scanf("%d", &len);
            arr = arrcreate(len);
            printf("\n<----------------->done 1\n");
            break;
        case 2:
            printf("display array:");
            for (int i = 0; i < len; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n<----------------->done 2\n");
            break;
        case 3:
            printf("heap sort");
            heapsort(arr, len);
            printf("\n<----------------->done 3\n");
            break;
        case 4:
            printf("heap sort");
            bubble(arr, len);
            printf("\n<----------------->done 4\n");
            break;
        case 5:
            printf("time compexcity:");
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<----------------->done 5\n");
            break;
        case 6:
            printf("time compexcity:");
            heapsort(arr, len);
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<----------------->done 6\n");
            break;
        case 7:
            printf("time compexcity:");
            bubble(arr, len);
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<----------------->done 7\n");
            break;
        case 8:
            printf("time compexcity:");
            bubble(arr, len);
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<----------------->done 8\n");
            break;
        case 9:
            printf("Extract largest element:");
            bubble(arr, len);
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<------------------->done 9\n");
            break;
        case 10:
            printf("Extract largest element:");
            bubble(arr, len);
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<-------------------->done 10\n");
        case 11:
            printf("insert a new element:");
            bubble(arr, len);
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            printf("%f", (double)diff);
            printf("\n<-------------------->done11\n");
        case 12:
            printf("Delete an element:");
            bubble(arr,len);
            start=clock();
            heapsort(arr,len);
            diff=clock() -start;
            printf("%f",(double)diff);
            printf("\n<------------------->done12\n");

        default:
            break;
        }
    }

    return 0;
}