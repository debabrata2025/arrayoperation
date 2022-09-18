#include <stdio.h>

//arry traversal
void arrtravarse(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//arry element insertion
int elemInsertion(int arr[], int size, int index, int element, int capacity){
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
//arry element deletion
void elemDeletion(int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    printf("successfully deleted\n");
}

int main()
{
    int size;
    int arr[100];
    printf("enter the no of elements of array\n");
    scanf("%d", &size);
    printf("enter arry element\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int option, index, element, a;
    printf("select 1 for display array element || selece 2 for element insertation || select 3 for element deletion\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:  arrtravarse(arr, size);
            
        break;
    case 2: 
            printf("enter the position you insert the element\n");
            scanf("%d", &index);
            printf("enter the element to insert\n");
            scanf("%d", &element);
            a = elemInsertion(arr, size, index, element, 100);
            size +=1;
            if (a == 1)
            {
                printf("successfully inserterd\n");
                arrtravarse(arr, size);
            }else{
                printf("array is overflowing\n");
            }
            
            break;
    case 3:  
            printf("enter the positin of deletion\n");
            scanf("%d", &index);
            elemDeletion(arr, size, index);
            size-=1;
            arrtravarse(arr, size);
        break;
    
    default: printf("nothing to print");
        break;
    }
    

    return 0;
}