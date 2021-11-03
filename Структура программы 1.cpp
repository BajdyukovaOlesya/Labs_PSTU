
#include <iostream>
using namespace std;
int i=1,a; // Объявление переменных + присваивание одной их них значения
int main()
{
    a = ++i * i++; 
    cout << a; // Вывод значения выражения
    return 0;
}
