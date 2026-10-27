#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Размер должен быть больше нуля." << std::endl;
        return 1;
    }

    int* arr = new int[n];

    std::cout << "Введите " << n << " чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Массив без нулей: ";
    bool found = false; // Флаг, чтобы проверить, были ли вообще ненулевые числа
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            std::cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "пусто";
    }

    std::cout << std::endl;
    delete[] arr;
    return 0;
}
