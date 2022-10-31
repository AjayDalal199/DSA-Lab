// Linear Search in an Array
#include <stdio.h>
#include <conio.h>

int main() {
    int arr[] = {100, 29, 33, 55, 1, 2, 9, 34, 88, 4};
    int size = sizeof(arr)/sizeof(int);
    int elm;
    printf("Enter the element you want to search: ");
    scanf("%d", &elm);
    int i = 0, pos = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == elm)
            pos = i;
    }
    if (pos != -1)
        printf("Your element %d is at postition %d", elm, pos+1);
    else   
        printf("Element %d not found in array.", elm);
}