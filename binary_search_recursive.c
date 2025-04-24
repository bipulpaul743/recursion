#include<stdio.h>

int binary_search(int arr[], int value, int low, int high) {
    int mid;
    if (low > high) {
        return -1;
    }
    mid = (high+low)/2;
    if (arr[mid] > value) {
        return binary_search(arr, value, low, mid-1);
    }
    else if (arr[mid] < value) {
        return binary_search(arr, value, mid+1, high);
    }
    else {
        return mid;
    }
}

int main() {
    int size, value;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements : ");
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&value);
    int low = 0;
    int high = size-1;
    int position = binary_search(arr, value, low, high);
    if (position != -1) {
        printf("The element %d is found at %d position", value, position+1);
    }
    else {
        printf("The element %d is not found in the array", value);
    }

    return 0;
}