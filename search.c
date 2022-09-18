#include <stdio.h>
//linear search with time complexity of big O(n);
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        
    }
    return -1;
}
//binary search
int BinarySearch(int arr[], int size, int element){

    int low, mid, high;
    low = 0;
    high = size-1;

    while (low <= high)
    {
        mid = (low+high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid+1;
        }else{
            high = mid-1;
        }     
    }
    return -1;
    
}

int main()
{
    //for unsorted array
    // int arr[] = {10, 30, 24, 45, 76, 69};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 51;

    //for sorted array
    int arr[] = {10, 30, 24, 45, 76, 96, 102};
    int size = sizeof(arr)/sizeof(int);
    int element = 96;
    

    int elemIndex = BinarySearch(arr, size, element);
    printf("the element %d is present in index %d", element, elemIndex);

    return 0;
}