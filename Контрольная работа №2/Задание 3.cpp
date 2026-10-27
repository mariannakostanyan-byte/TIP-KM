#include <iostream>

// Упрощенная функция
double findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size; 
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Один массив, созданный вручную
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Вычисляем размер массива через sizeof
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Вызываем функцию и сразу выводим результат
    std::cout << "Среднее арифметическое: " << findAverage(numbers, size) << std::endl;

    return 0;
}
