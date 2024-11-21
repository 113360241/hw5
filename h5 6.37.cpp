#include <stdio.h>

int recursiveMaximum(const int array[], int size);

int main(void) {
    int arr[] = {  8 , 6,45 ,2,10,86,100,99,56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = recursiveMaximum(arr, size);
    printf("陣列中的最大值為: %d\n", max);

    return 0;
}


int recursiveMaximum(const int array[], int size) {
    if (size == 1) {
        return array[0]; 
    }


    int maxOfRest = recursiveMaximum(array, size - 1);
    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}
