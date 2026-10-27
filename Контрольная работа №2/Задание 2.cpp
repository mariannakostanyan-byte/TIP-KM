#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "Russian");

    int rows, cols;
    
    // Запрашиваем размеры массива
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    if (rows <= 0 || cols <= 0) {
        std::cout << "Размеры массива должны быть положительными." << std::endl;
        return 1;
    }

    // Создаем двумерный вектор (массив)
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    // Заполняем массив числами
    std::cout << "Введите элементы массива (" << rows * cols << " чисел):" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Считаем количество четных элементов
    int evenCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Оператор % (остаток от деления) вернет 0, если число делится на 2 без остатка
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            }
        }
    }

    // Выводим результат
    std::cout << "\nИсходный массив:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "\nКоличество четных элементов: " << evenCount << std::endl;

    return 0;
}
