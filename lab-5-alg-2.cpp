#include <iostream>
#include <vector>

void shellSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Вставляем элементы для каждого шага
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            // Сравниваем и сдвигаем элементы
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp; // Вставляем текущее значение на правильное место
        }
    }
}

int main() {
    std::vector<int> arr = {12, 34, 54, 2, 3};
    std::cout << "Массив до сортировки: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    shellSort(arr);

    std::cout << "Массив после сортировки: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}