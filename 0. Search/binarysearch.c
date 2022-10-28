// Binary Search in array.
// Here Array is sorted in Ascending Order.
#include <stdio.h>
#include <conio.h>

int main() {
    int arr[] = {6, 9, 15, 20, 35, 36, 40, 55, 88, 92, 105};
    int size = sizeof(arr)/sizeof(int);
    int elm = -1;
    printf("Enter the element you want to search: ");
    scanf("%d", &elm);
    int low = 0;
    int high = size-1;
    int mid = (low + high) / 2;
    int flag = -1;
    while (low <= high) {
        if (arr[mid] == elm) {
            flag = 0;
            break;
        }
        else if (arr[mid] > elm)
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }

    if (flag == 0)
        printf("Your element %d is at position %d", elm, mid+1);
    else
        printf("Your element %d was not found in array.", elm);
}