﻿#include <iostream> 
#include <clocale>
int i,k,c;
using namespace std;
int n = rand() % 100;
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Вводите числа от 1 до 100.\n У вас есть 6 попыток отгадать загаданное число\n";
	if (n > 50) { cout << " Подсказка, загаданное число больше 50\n"; }
	else if (n < 50) { cout << " Подсказка, загаданное число меньше 50\n"; }
	i = 6;
	c = 1;
	while (i>0) {
		cin >> k;
		if ((k != n) && (k > n)) { --i; ++c; cout << "Не угадали. Ваше число ,больше загаданного. у вас осталось " << i << " попыток\n"; }
		else if ((k != n) && (n > k)) { --i; ++c; cout << "Не угадали. Ваше число ,меньше загаданного. у вас осталось " << i << " попыток\n"; }
		else
			if (k = n) { cout << "Поздравлем! Число угадано с " << c << " попытки"; }
	};
	if (i == 0) { cout << "Вы проиграли"; };
	return 0;
}

