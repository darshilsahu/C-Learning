// To Make a Function that Reverse the Arrays Passed to it
#include <stdio.h>

void reversearray(int arr[], int size);
void reversearray(int arr[], int size)
{
    int temp;
    if(size%2==0){
        
        for (int i = 0; i < (size/2)-1; i++)
        {
            temp=arr[size-1-i];
            arr[size-1-i]=arr[i];
            arr[i]=temp;
        }
    }   
    else{
        for (int i = 0; i < (size+1/2)-1; i++)
        {
            temp=arr[size-1-i];
            arr[size-1-i]=arr[i];
            arr[i]=temp;
        }
    }
    for (int j = 0; j < size; j++)
    {
        printf("%d\n",arr[j]);
    }
    
}

int main()
{
    int num;
    printf("Enter Number of Arrays to Store: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("invalid");
        return 1;
    }

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    reversearray(arr, num);

    return 0;
}