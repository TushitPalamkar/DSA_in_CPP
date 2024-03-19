#include <stdio.h>
 
// An iterative binary search function.
int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right) {
        int mid = (right+left)/2;
 
        if (arr[mid] == key)
            return mid;
 
        if (arr[mid] < key)
            left = mid + 1;
 
        else
            right = mid - 1;
    }
 

    return -1;
}
 
int main()
{
    int n,key;
    printf("Enter the no of elements of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter the element to be found:");
    scanf("%d",&key);
    int result = binarySearch(arr, 0, n - 1, key);
    if(result==-1)
    printf("Element was not found in the array");
    else
    printf("Element is found at index :%d",result);
    return 0;
}