#include <iostream>
#include <vector>

void countingSort(std::vector<int>& arr) {
    // максимальное значение в массиве
    int maxVal = *max_element(arr.begin(), arr.end());
    
    // массив счетчиков
    std::vector<int> count(maxVal + 1, 0);
    
    // подсчет количества вхождений каждого элемента
    for (int num : arr) {
        count[num]++;
    }
    
    // Перезаписываем исходный массив отсортированными элементами
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1, 5, 7, 6, 4, 5};
    
    std::cout << "Массив до сортировки: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    countingSort(arr); 

    std::cout << "Массив после сортировки: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}