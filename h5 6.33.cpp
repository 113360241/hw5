#include <stdio.h>

int binarySearch(const int array[], int start, int end, int key);

int main(void) {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; // 已排序的陣列
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("輸入要尋找的數字: ");
    scanf_s("%d", &key);

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1) {
        printf(" %d 在第 %d 個.\n", key, result);
    }
    else {
        printf(" %d 找不到 \n", key);
    }

    return 0;
}


int binarySearch(const int array[], int start, int end, int key) {
    if (start > end) {
        return -1; 
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; 
    }
    else if (key < array[mid]) {
        return binarySearch(array, start, mid - 1, key); 
    }
    else {
        return binarySearch(array, mid + 1, end, key);
    }
}
