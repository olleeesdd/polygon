#include <iostream>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; 
        int j = i - 1;    

        // сдвигаем элементы, которые больше key, вправо
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--; // переходим к следующему элементу
        }

        // вставляем key на правильное место
        arr[j + 1] = key;
    }
}

// вывод массива
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main() {
    int arr[] = {5, 2, 9, 1, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    std::cout << "исходный массив ";
    printArray(arr, size);

    insertionSort(arr, size); 

    std::cout << отсортированный массив ";
    printArray(arr, size); 
    return 0;
}