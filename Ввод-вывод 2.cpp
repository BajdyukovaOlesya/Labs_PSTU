﻿

#include <iostream>//Подключение директивы ввода-вывода
#include <clocale>// Директива для словесного ввода-вывода
using namespace std;// Пространство имен
int a, b;// Объявление переменных

int main()
{
    setlocale(LC_ALL, "ru");//Подключение кириллицы
    cout << "Введите два числа\n";// Вывод фразы-запрос на ввод данных
    cin >> a >> b;// Ввод данных
    a = a * b;// Нахождение произведения
    cout << "Их произведение равно " << a;//Вывод результата
    return 0;// Проверка корректности работы программы
}


