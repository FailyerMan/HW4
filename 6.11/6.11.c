#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(int arr[],int n);

int main(void)
{
    srand(time(NULL));
    int num = 1+rand()%100;
    int arr[num];
    printf("%d numbers had been generated\n",num);
    printf("They're:\n");
    for (int i = 0;i < num;i++)
    {
        arr[i] = 1+rand()%100;
        if ((i+1)%10 == 0)
        {
            printf("%2d\n",arr[i]);
        }
        else
            printf("%2d ",arr[i]);
    }
    printf("\n\nafter bubblesort They're:\n");
    bubblesort(arr,num);
    for (int i = 0; i < num;i++)
    {
        if ((i+1)%10 == 0)
        {
            printf("%2d\n",arr[i]);
        }
        else
            printf("%2d ",arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

void bubblesort(int arr[],int n)
{
    int temp;
    for (int i = 0;i < n;i++)
    {
        for (int j = i;j < n;j++)
        {   
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}