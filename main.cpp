#include <iostream>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    print(arr, size);
    return 0;
}