#include <iostream> 
#include <clocale>
int i,k,c;
using namespace std;
int n = rand() % 100;
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Вводите числа от 1 до 100.\n У вас есть 7 попыток отгадать загаданное число\n";
	i = 7;
	c = 1;
	while (i>0) {
		cin >> k;
		if ((k != n) && (k > n)) { --i; ++c; cout << "Не угадали. Ваше число больше загаданного. у вас осталось " << i << " попыток\n"; }
		else if ((k != n) && (n > k)) { --i; ++c; cout << "Не угадали. Ваше число меньше загаданного. у вас осталось " << i << " попыток\n"; }
		else
			if (k = n) { cout << "Поздравляем! Число угадано с " << c << " попытки"; }
	};
	if (i == 0) { cout << "Вы не угадали"; };
	return 0;
}

